/*
 *
 * Copyright 2016, Google Inc.
 * All rights reserved.
 *
 * Redistribution and use in source and binary forms, with or without
 * modification, are permitted provided that the following conditions are
 * met:
 *
 *     * Redistributions of source code must retain the above copyright
 * notice, this list of conditions and the following disclaimer.
 *     * Redistributions in binary form must reproduce the above
 * copyright notice, this list of conditions and the following disclaimer
 * in the documentation and/or other materials provided with the
 * distribution.
 *     * Neither the name of Google Inc. nor the names of its
 * contributors may be used to endorse or promote products derived from
 * this software without specific prior written permission.
 *
 * THIS SOFTWARE IS PROVIDED BY THE COPYRIGHT HOLDERS AND CONTRIBUTORS
 * "AS IS" AND ANY EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT
 * LIMITED TO, THE IMPLIED WARRANTIES OF MERCHANTABILITY AND FITNESS FOR
 * A PARTICULAR PURPOSE ARE DISCLAIMED. IN NO EVENT SHALL THE COPYRIGHT
 * OWNER OR CONTRIBUTORS BE LIABLE FOR ANY DIRECT, INDIRECT, INCIDENTAL,
 * SPECIAL, EXEMPLARY, OR CONSEQUENTIAL DAMAGES (INCLUDING, BUT NOT
 * LIMITED TO, PROCUREMENT OF SUBSTITUTE GOODS OR SERVICES; LOSS OF USE,
 * DATA, OR PROFITS; OR BUSINESS INTERRUPTION) HOWEVER CAUSED AND ON ANY
 * THEORY OF LIABILITY, WHETHER IN CONTRACT, STRICT LIABILITY, OR TORT
 * (INCLUDING NEGLIGENCE OR OTHERWISE) ARISING IN ANY WAY OUT OF THE USE
 * OF THIS SOFTWARE, EVEN IF ADVISED OF THE POSSIBILITY OF SUCH DAMAGE.
 *
 */

#ifndef GRPC_IMPL_CODEGEN_CONNECTIVITY_STATE_H
#define GRPC_IMPL_CODEGEN_CONNECTIVITY_STATE_H

#ifdef __cplusplus
extern "C" {
#endif

/** Connectivity state of a channel. */
typedef enum {
  /** channel has just been initialized */
  GRPC_CHANNEL_INIT = -1,
  /** channel is idle */
  GRPC_CHANNEL_IDLE,
  /** channel is connecting */
  GRPC_CHANNEL_CONNECTING,
  /** channel is ready for work */
  GRPC_CHANNEL_READY,
  /** channel has seen a failure but expects to recover */
  GRPC_CHANNEL_TRANSIENT_FAILURE,
  /** channel has seen a failure that it cannot recover from */
  GRPC_CHANNEL_SHUTDOWN
} grpc_connectivity_state;

#ifdef __cplusplus
}
#endif

#endif /* GRPC_IMPL_CODEGEN_CONNECTIVITY_STATE_H */
