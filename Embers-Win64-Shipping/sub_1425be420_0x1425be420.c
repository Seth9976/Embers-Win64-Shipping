// 函数: sub_1425be420
// 地址: 0x1425be420
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t i_1 = arg4
int64_t* r14 = arg2
int32_t result

if (arg4 != 0)
    int32_t* rsi_1 = arg3 + 0x48
    int32_t i
    
    do
        int64_t* rbp_1 = r14
        r14 = &r14[0xb]
        
        if (rbp_1 != &rsi_1[-0x12])
            int64_t rdi_1 = sx.q(*rsi_1)
            void* rbx_1 = &rbp_1[7]
            sub_1405a4aa0(rbx_1, 0, rdi_1.d, 4)
            void* rax = *(rsi_1 - 8)
            void* rdx = &rsi_1[-4]
            void* r9 = *(rbx_1 + 8)
            
            if (rax != 0)
                rdx = rax
            
            if (r9 != 0)
                rbx_1 = r9
            
            memcpy(rbx_1, rdx, (rdi_1 << 2).d)
            rbp_1[9].d = rdi_1.d
            sub_1425bd8a0(rbp_1, &rsi_1[-0x12])
        
        rbp_1[0xa].d = rsi_1[2]
        result = rsi_1[3]
        rsi_1 = &rsi_1[0x16]
        *(rbp_1 + 0x54) = result
        i = i_1
        i_1 -= 1
    while (i != 1)

result.b = 1
return result
