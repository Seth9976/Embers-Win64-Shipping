// 函数: sub_1426c5be0
// 地址: 0x1426c5be0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

sub_140d15db0(arg1, arg2)
*arg1 = &data_1434722e0
__builtin_memset(&arg1[5], 0, 0x20)
arg1[9].d = 0xffffffff
*(arg1 + 0x4c) = 0
arg1[0xa] = -1
arg1[0xb].d = 0
arg1[0xc] = 0
void* const rdi = arg1[4]
void* rax_1
int64_t rax_2
void* rdx

if (rdi != 0)
    rax_1 = sub_1425be5e0()
    rdx = *(rdi + 0x10)
    rax_2 = sx.q(*(rax_1 + 0x38))

if (rdi == 0 || rax_2.d s> *(rdx + 0x38) || *(*(rdx + 0x30) + (rax_2 << 3)) != rax_1 + 0x30)
    rdi = nullptr

sub_140d3a3a0(arg1 + 0x54, rdi)
int32_t rcx_2 = arg1[1].d

if (((rcx_2 u>> 4).b & 1) == 0)
    arg1[1].d = rcx_2 | 0x1000000
    void* rax_6 = sub_140d3c6e0(arg1 + 0x54)
    
    if (rax_6 != 0)
        void* rdi_1 = *(rax_6 + 0x138)
        
        if (rdi_1 != 0)
            void* rax_7 = sub_14272b250()
            void* rdx_2 = *(rdi_1 + 0x10)
            int64_t rax_8 = sx.q(*(rax_7 + 0x38))
            
            if (rax_8.d s<= *(rdx_2 + 0x38) && *(*(rdx_2 + 0x30) + (rax_8 << 3)) == rax_7 + 0x30)
                void*** arg_8 = arg1
                sub_1405a7050(rdi_1 + 0xb8, &arg_8)

return arg1
