// 函数: sub_141859700
// 地址: 0x141859700
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t result = arg5
int32_t i_1 = arg3
arg1[1].d = arg3
int64_t* rbp = arg2

if (arg3 != 0 || result != 0 || arg4 != 0)
    result = sub_140808ed0(arg1, arg3 + result, arg4)
    int64_t* rsi_1 = *arg1
    
    if (i_1 != 0)
        void* rdi_1 = &rsi_1[4]
        int32_t i
        
        do
            *rsi_1 = 0
            int64_t* rcx = rdi_1 - 0x10
            *(rdi_1 - 0x18) = 0
            *rdi_1 = 0
            *(rdi_1 + 8) = 0
            *(rdi_1 + 0xc) = 0x80
            int64_t* rax = *rdi_1
            
            if (rax != 0)
                rcx = rax
            
            *rcx = 0
            rcx[1] = 0
            *(rdi_1 + 0x10) = 0xffffffff
            *(rdi_1 + 0x14) = 0
            *(rdi_1 + 0x20) = 0
            *(rdi_1 + 0x28) = 0
            result = sub_1418235f0(rsi_1, rbp)
            rsi_1 = &rsi_1[0xa]
            rdi_1 += 0x50
            rbp = &rbp[0xa]
            i = i_1
            i_1 -= 1
        while (i != 1)
else
    *(arg1 + 0xc) = 0

return result
