// 函数: sub_140be1890
// 地址: 0x140be1890
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t r9 = *(arg1 + 0x5c)
int64_t rbx = arg2
uint64_t i_4 = zx.q(arg3)
int32_t rsi_3 = (*(arg1 + 0x58) - 1 + r9) & neg.d(r9)
int32_t arg_18 = rsi_3
int32_t result = memset(rbx, 0, sx.q(rsi_3 * arg3))
int64_t* rdi = *(arg1 + 0xb8)
int32_t r13 = 0

if (rdi != 0)
    result = (*(*rdi + 0x10))(rdi)
    
    if (result.b == 0 && i_4.d s> 0)
        uint64_t i_2 = zx.q(i_4.d)
        uint64_t i
        
        do
            result = (*(*rdi + 0x18))(rdi, rbx)
            rbx += sx.q(rsi_3)
            i = i_2
            i_2 -= 1
        while (i != 1)
        rsi_3 = arg_18
    
    r13 = rdi[1].d

if (*(arg1 + 0x58) s> r13)
    int64_t* rbx_1 = *(arg1 + 0x70)
    int64_t r15
    r15.b = 0
    
    if (rbx_1 != 0)
        while (r15.b == 0)
            result = rbx_1[7].d * *(rbx_1 + 0x3c) + *(rbx_1 + 0x4c)
            
            if (result s<= r13)
                r15.b = 1
            else if (i_4.d s> 0)
                int64_t rdi_1 = arg2
                uint64_t i_3 = i_4
                uint64_t i_1
                
                do
                    if (not(test_bit(zx.q(rbx_1[8].d), 9)))
                        result = (*(*rbx_1 + 0xf0))(rbx_1, sx.q(*(rbx_1 + 0x4c)) + rdi_1)
                    else
                        result = memset(sx.q(*(rbx_1 + 0x4c)) + rdi_1, 0, 
                            sx.q(rbx_1[7].d * *(rbx_1 + 0x3c)))
                    
                    rdi_1 += sx.q(rsi_3)
                    i_1 = i_3
                    i_3 -= 1
                while (i_1 != 1)
            
            rbx_1 = rbx_1[0xb]
            rsi_3 = arg_18
            
            if (rbx_1 == 0)
                break

return result
