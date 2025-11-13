// 函数: sub_140917150
// 地址: 0x140917150
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t result = arg5
int32_t i_1 = arg3
arg1[1].d = arg3

if (arg3 != 0 || result != 0 || arg4 != 0)
    result = sub_140880030(arg1, arg3 + result, arg4)
    void* rbp_1 = *arg1
    
    if (i_1 != 0)
        int64_t* rsi_1 = arg2 + 0x10
        void* rbx_1 = rbp_1 + 0x48
        int32_t i
        
        do
            sub_140596d10(rbp_1, &rsi_1[-2])
            *(rbx_1 - 0x38) = *rsi_1
            void* rax_1 = rsi_1[1]
            *(rbx_1 - 0x30) = rax_1
            
            if (rax_1 != 0)
                *(rax_1 + 8) += 1
            
            *(rbx_1 - 0x28) = rsi_1[2].d
            void* rdx_2 = rbx_1 - 0x10
            *(rbx_1 - 0x20) = 0
            *(rbx_1 - 0x18) = 0
            *rbx_1 = 0
            *(rbx_1 + 8) = 0
            *(rbx_1 + 0xc) = 0x80
            void* rax_3 = *rbx_1
            
            if (rax_3 != 0)
                rdx_2 = rax_3
            
            *rdx_2 = 0
            *(rdx_2 + 8) = 0
            *(rbx_1 + 0x10) = 0xffffffff
            *(rbx_1 + 0x14) = 0
            *(rbx_1 + 0x20) = 0
            *(rbx_1 + 0x28) = 0
            result = sub_14091bd10(rbx_1 - 0x20, &rsi_1[3])
            rbp_1 += 0x78
            rbx_1 += 0x78
            rsi_1 = &rsi_1[0xf]
            i = i_1
            i_1 -= 1
        while (i != 1)
else
    *(arg1 + 0xc) = 0

return result
