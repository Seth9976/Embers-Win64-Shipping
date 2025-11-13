// 函数: sub_14259bc20
// 地址: 0x14259bc20
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t i_1 = arg4
uint64_t* rbp = arg2

if (arg4 != 0)
    int32_t* rbx_1 = arg3 + 0x48
    int32_t i
    
    do
        uint64_t* r14_1 = rbp
        rbp = &rbp[0xa]
        
        if (r14_1 != &rbx_1[-0x12])
            int64_t rsi_1 = sx.q(*rbx_1)
            void* rdi_1 = &r14_1[7]
            sub_1405a4aa0(rdi_1, 0, rsi_1.d, 4)
            void* rax = *(rbx_1 - 8)
            void* rdx = &rbx_1[-4]
            void* r9 = *(rdi_1 + 8)
            
            if (rax != 0)
                rdx = rax
            
            if (r9 != 0)
                rdi_1 = r9
            
            memcpy(rdi_1, rdx, (rsi_1 << 2).d)
            r14_1[9].d = rsi_1.d
            sub_14259b5d0(r14_1, &rbx_1[-0x12])
        
        rbx_1 = &rbx_1[0x14]
        i = i_1
        i_1 -= 1
    while (i != 1)

int64_t* result
result.b = 1
return result
