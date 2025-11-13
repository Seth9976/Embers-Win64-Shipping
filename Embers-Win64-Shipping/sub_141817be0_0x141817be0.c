// 函数: sub_141817be0
// 地址: 0x141817be0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t result = arg5
int32_t i_1 = arg3
arg1[1].d = arg3

if (arg3 != 0 || result != 0 || arg4 != 0)
    result = sub_141846b00(arg1, arg3 + result, arg4)
    void* rbp_1 = *arg1
    
    if (i_1 != 0)
        void* rsi_1 = arg2 + 0x90
        void* rbx_1 = rbp_1 + 0xb8
        int32_t i
        
        do
            sub_1418209d0(rbp_1, rsi_1 - 0x90)
            *(rbx_1 - 0x40) = *(rsi_1 - 0x18)
            void* rax_1 = *(rsi_1 - 0x10)
            *(rbx_1 - 0x38) = rax_1
            
            if (rax_1 != 0)
                *(rax_1 + 8) += 1
            
            *(rbx_1 - 0x30) = *(rsi_1 - 8)
            void* rax_3 = *rsi_1
            *(rbx_1 - 0x28) = rax_3
            
            if (rax_3 != 0)
                *(rax_3 + 8) += 1
            
            *(rbx_1 - 0x20) = 0
            *(rbx_1 - 0x18) = 0
            void* rdx_2 = rbx_1 - 0x10
            *rbx_1 = 0
            *(rbx_1 + 8) = 0
            *(rbx_1 + 0xc) = 0x80
            void* rax_4 = *rbx_1
            
            if (rax_4 != 0)
                rdx_2 = rax_4
            
            *rdx_2 = 0
            *(rdx_2 + 8) = 0
            *(rbx_1 + 0x10) = 0xffffffff
            *(rbx_1 + 0x14) = 0
            *(rbx_1 + 0x20) = 0
            *(rbx_1 + 0x28) = 0
            sub_1418235f0(rbx_1 - 0x20, rsi_1 + 8)
            *(rbx_1 + 0x30) = 0
            *(rbx_1 + 0x38) = 0
            void* rdx_4 = rbx_1 + 0x40
            *(rbx_1 + 0x50) = 0
            *(rbx_1 + 0x58) = 0
            *(rbx_1 + 0x5c) = 0x80
            void* rax_5 = *(rbx_1 + 0x50)
            
            if (rax_5 != 0)
                rdx_4 = rax_5
            
            *rdx_4 = 0
            *(rdx_4 + 8) = 0
            *(rbx_1 + 0x60) = 0xffffffff
            *(rbx_1 + 0x64) = 0
            *(rbx_1 + 0x70) = 0
            *(rbx_1 + 0x78) = 0
            result = sub_1418235f0(rbx_1 + 0x30, rsi_1 + 0x58)
            rbp_1 += 0x138
            rbx_1 += 0x138
            rsi_1 += 0x138
            i = i_1
            i_1 -= 1
        while (i != 1)
else
    *(arg1 + 0xc) = 0

return result
