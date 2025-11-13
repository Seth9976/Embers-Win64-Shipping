// 函数: sub_140a39360
// 地址: 0x140a39360
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t rsi = arg5
int64_t rax_1
int32_t rdx
rdx:rax_1 = sx.o(arg4)
int64_t r15_1 = ((zx.q(rdx) & 0x3fff) + rax_1) s>> 0xe
int64_t rax_4
int32_t rdx_2
rdx_2:rax_4 = sx.o(arg4 - 1 + rsi)
int32_t r12_1 = (((zx.q(rdx_2) & 0x3fff) + rax_4) s>> 0xe).d
sub_140a37ea0(arg1)
sub_140a38850()
EnterCriticalSection(&data_143cf8d78)

if (sx.q(r12_1) s>= *(arg1 + 0x28))
    *(arg1 + 0x28) = sx.q(r12_1 + 1)
    sub_140a39ba0(arg1 + 8, r12_1 + 1, 0)
    sub_140a39b30(arg1 + 0x18, *(arg1 + 0x28), 0)

uint64_t rbx_2 = zx.q(r12_1 - r15_1.d + 1)
void*** rax_5 = sub_140a82f30(zx.q(((rbx_2 << 2) + 0x24).d), 8)
rax_5[1] = 0
__builtin_memset(&rax_5[2], 0, 0x18)
*rax_5 = &data_142e52060
rax_5[1].d = 0
*rax_5 = &data_142e52150
*(rax_5 + 0x24) = 0xffffffff
rax_5[4].d = rbx_2.d
rax_5[2] = arg4 - (r15_1 << 0xe)
int32_t rbx_3 = r15_1.d
rax_5[3] = rsi

if (r15_1.d s<= r12_1)
    do
        int64_t rax_8 = *(arg1 + 8)
        int64_t rsi_1 = sx.q(rbx_3)
        int32_t* rdi_2 = rax_8 + (rsi_1 << 2)
        int64_t rax_9 = sx.q(*(rax_8 + (rsi_1 << 2)))
        
        if (rax_9.d != 0xffffffff)
            int64_t rdx_7 = data_143cf8e48
            int32_t r10_1 = (rax_9 + 2).d
            int64_t rax_13 = (rax_9 + 2) * 5
            int16_t r9_1 = *(rdx_7 + (rax_13 << 3) + 0x20)
            int64_t* r8 = rdx_7 + (rax_13 << 3)
            
            if (r9_1 == 0 && *r8 == 0)
                *(rdx_7 + sx.q(r8[3].d) * 0x28 + 0x14) = *(r8 + 0x14)
                *(data_143cf8e48 + sx.q(*(r8 + 0x14)) * 0x28 + 0x18) = r8[3].d
                r8[3].d = r10_1
                *(r8 + 0x14) = r10_1
            
            r8[4].w = r9_1 + 1
        else
            *rdi_2 = *sub_140a37a70(arg1, &arg5, &data_143cf8d78, rbx_3, arg6)
        
        *(rax_5 + (sx.q(rbx_3 - r15_1.d) << 2) + 0x24) = *rdi_2
        int64_t rax_21 = *(arg1 + 0x18)
        void* rcx_11 = *(rax_21 + (rsi_1 << 3))
        int64_t* rdi_3 = rax_21 + (rsi_1 << 3)
        int64_t rax_22
        
        if (rcx_11 != 0)
            rax_22 = 0
            
            if (0 == *(rcx_11 + 8))
                *(rcx_11 + 8) = 0
            else
                rax_22 = *(rcx_11 + 8)
        
        if (rcx_11 == 0 || ((rax_22 u>> 0x1a).b & 1) != 0)
            int64_t* rcx_14 = *rdi_3
            *rdi_3 = 0
            
            if (rcx_14 != 0)
                rcx_14[9].d -= 1
                
                if (rcx_14[9].d == 1)
                    sub_140a2f6e0(rcx_14)
        else
            int64_t rsi_2 = sx.q(*(arg3 + 0x28))
            int32_t rax_24 = (rsi_2 + 1).d
            *(arg3 + 0x28) = rax_24
            
            if (rax_24 s> *(arg3 + 0x2c))
                sub_14083a490(arg3, rsi_2.d)
            
            void* rax_25 = *(arg3 + 0x20)
            void* rcx_13 = arg3
            void* rdx_10 = *rdi_3
            
            if (rax_25 != 0)
                rcx_13 = rax_25
            
            *(rcx_13 + (rsi_2 << 3)) = rdx_10
            
            if (rdx_10 != 0)
                *(rdx_10 + 0x48) += 1
        
        rbx_3 += 1
    while (rbx_3 s<= r12_1)

*arg2 = rax_5
rax_5[1].d += 1
LeaveCriticalSection(&data_143cf8d78)
return arg2
