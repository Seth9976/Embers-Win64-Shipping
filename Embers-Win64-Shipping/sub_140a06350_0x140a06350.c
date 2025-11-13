// 函数: sub_140a06350
// 地址: 0x140a06350
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t rbx = sx.q(arg1[1].d)

if (arg2 s> rbx.d)
    int32_t i_1 = arg2 - rbx.d
    arg1[1].d = arg2
    
    if (arg2 s> *(arg1 + 0xc))
        sub_1405c4fe0(arg1)
    
    int64_t* rdx_3 = (rbx << 6) + *arg1
    
    if (i_1 != 0)
        uint64_t rax = rdx_3 + 0x2c
        int32_t i
        
        do
            *rdx_3 = 0
            rdx_3 = &rdx_3[8]
            __builtin_memset(rax - 0x24, 0, 0x18)
            rax += 0x40
            *(rax - 0x40) = data_143dbb1f8.q
            int32_t rcx = data_143dbb200
            *(rax - 0x38) = rcx
            *(rax - 0x4c) = *(rax - 0x40)
            *(rax - 0x44) = rcx
            *(rax - 0x34) = 0
            *(rax - 0x30) = 0x100
            i = i_1
            i_1 -= 1
        while (i != 1)
else if (arg2 s< rbx.d)
    return sub_140a05be0(arg1, arg2, rbx.d - arg2, arg3) __tailcall
