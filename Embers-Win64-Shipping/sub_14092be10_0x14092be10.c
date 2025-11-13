// 函数: sub_14092be10
// 地址: 0x14092be10
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

char rax
int64_t r8
rax, r8 = sub_14092d020(arg1)

if (rax != 0)
    if (*(arg1 + 0x80) == *(arg1 + 0xac))
        int32_t i_2 = *(arg1 + 0xd0)
        
        if (i_2 s> 0)
            uint64_t i_1 = zx.q(i_2)
            int64_t rdi_1 = 0
            uint64_t i
            
            do
                int64_t* rdx_1 = *(arg1 + 0xc8) + rdi_1
                sub_140917b90(arg1 + 0x78, rdx_1, &rdx_1[3])
                rdi_1 += 0x70
                i = i_1
                i_1 -= 1
            while (i != 1)
    
    r8.b = 1
else
    r8.b = 0

return sub_140926490(arg3, arg2, r8) __tailcall
