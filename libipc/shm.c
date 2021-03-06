/******************************************************************************
 * Copyright (C) 2014-2018 Zhifeng Gong <gozfree@163.com>
 *
 * This program is free software; you can redistribute it and/or
 * modify it under the terms of the GNU Lesser General Public
 * License as published by the Free Software Foundation; either
 * version 2.1 of the License, or (at your option) any later version.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU
 * Lesser General Public License for more details.
 *
 * You should have received a copy of the GNU Lesser General Public
 * License along with libraries; if not, write to the Free Software
 * Foundation, Inc., 51 Franklin Street, Fifth Floor, Boston, MA 02110-1301 USA
 ******************************************************************************/
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>
#include <sys/mman.h>
#include "libipc.h"


struct shm_ctx {

};


static void *shm_init(const char *name, enum ipc_role role)
{
    return NULL;
}


static void shm_deinit(struct ipc *ipc)
{

}


static int shm_write(struct ipc *ipc, const void *buf, size_t len)
{
    return 0;
}

static int shm_read(struct ipc *ipc, void *buf, size_t len)
{
    return 0;
}


struct ipc_ops shm_ops = {
    .init             = shm_init,
    .deinit           = shm_deinit,
    .accept           = NULL,
    .connect          = NULL,
    .register_recv_cb = NULL,
    .send             = shm_write,
    .recv             = shm_read,
};
