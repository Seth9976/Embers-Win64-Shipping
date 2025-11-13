// 函数: sub_141916c10
// 地址: 0x141916c10
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

if (arg4 s< 0 && *(arg2 + 0x894) == 0)
    return 

int32_t r14_1 = 0
int32_t var_30

if (arg4 s>= 0)
    int32_t rdi_1 = 1
    int64_t r15_1 = 0
    
    do
        void* rax_1 = *(arg3 + 0x10)
        void* rcx = arg3
        
        if (rax_1 != 0)
            rcx = rax_1
        
        if ((*(rcx + (zx.q(r14_1) u>> 5 << 2)) & rdi_1) != 0)
            int32_t* rcx_3 = *(arg1 + 0x160) + r15_1
            var_30 = rcx_3[2]
            sub_14190a2a0(arg1, arg2, r14_1, *rcx_3, rcx_3[1], rcx_3[4].b, rcx_3[3], var_30)
        else
            int32_t* rbx_2 = *(arg2 + 0x18) + r15_1
            
            if (*rbx_2 != 0x822e || rbx_2[1] != 0 || rbx_2[2] != 0x88ba || rbx_2[3] != 0
                    || rbx_2[4].b != 0)
                data_143f00290(zx.q(r14_1), 0, 0, 0, 0, 0x88ba, 0x822e, var_30)
                __builtin_memcpy(rbx_2, 
                    "\x2e\x82\x00\x00\x00\x00\x00\x00\xba\x88\x00\x00\x00\x00\x00\x00\x00", 0x11)
                *(arg2 + 0x894) &= not.d(rdi_1)
        
        r14_1 += 1
        rdi_1 = rol.d(rdi_1, 1)
        r15_1 += 0x14
    while (r14_1 s<= arg4)

int32_t rdi_2 = arg4 + 1

if (rdi_2 s>= arg5)
    return 

int32_t rsi_2 = rol.d(1, rdi_2.b)
uint64_t r14_3 = sx.q(rdi_2) * 0x14

do
    int64_t rbx_3 = *(arg2 + 0x18)
    
    if (*(r14_3 + rbx_3) != 0x822e || *(r14_3 + rbx_3 + 4) != 0 || *(r14_3 + rbx_3 + 8) != 0x88ba
            || *(r14_3 + rbx_3 + 0xc) != 0 || *(r14_3 + rbx_3 + 0x10) != 0)
        data_143f00290(zx.q(rdi_2), 0, 0, 0, 0, 0x88ba, 0x822e, var_30)
        __builtin_memcpy(r14_3 + rbx_3, 
            "\x2e\x82\x00\x00\x00\x00\x00\x00\xba\x88\x00\x00\x00\x00\x00\x00\x00", 0x11)
        *(arg2 + 0x894) &= not.d(rsi_2)
    
    rdi_2 += 1
    rsi_2 = rol.d(rsi_2, 1)
    r14_3 += 0x14
while (rdi_2 s< arg5)
