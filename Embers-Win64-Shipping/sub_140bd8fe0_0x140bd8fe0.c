// 函数: sub_140bd8fe0
// 地址: 0x140bd8fe0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t rax = *(arg1 + 0x5c)
int32_t r13 = 0
int32_t r9 = *(arg1 + 0x58)
int64_t* rbx = *(arg1 + 0xb8)
int32_t i_4 = arg3
int64_t r8 = arg2
int32_t result = neg.d(rax)
int32_t count_2 = (rax - 1 + r9) & result
int32_t count_3 = count_2

if (rbx != 0)
    if (i_4 s> 0)
        int64_t count_1 = sx.q(count_2)
        int64_t rdi_1 = r8
        uint64_t i_3 = zx.q(i_4)
        uint64_t i
        
        do
            if ((*(*rbx + 0x20))(rbx) != 0)
                (*(*rbx + 0x28))(rbx, rdi_1)
            
            if ((*(*rbx + 0x10))(rbx) == 0)
                result = (*(*rbx + 0x18))(rbx, rdi_1)
            else
                result = memset(rdi_1, 0, count_1)
            
            rdi_1 += count_1
            i = i_3
            i_3 -= 1
        while (i != 1)
        r9 = *(arg1 + 0x58)
        count_2 = count_3
        r8 = arg2
    
    r13 = rbx[1].d

if (r9 s> r13)
    int64_t* rbx_1 = *(arg1 + 0x70)
    int64_t r15
    r15.b = 0
    
    if (rbx_1 != 0)
        while (r15.b == 0)
            int32_t rcx_5 = rbx_1[7].d
            result = *(rbx_1 + 0x3c) * rcx_5 + *(rbx_1 + 0x4c)
            
            if (result s<= r13)
                r15.b = 1
            else if (i_4 s> 0)
                uint64_t i_2 = zx.q(i_4)
                int64_t rsi_1 = r8
                uint64_t i_1
                
                do
                    int32_t rdi_2 = 0
                    
                    if (rcx_5 s> 0)
                        do
                            if ((rbx_1[8] & 0x1000000200) != 0x1000000200)
                                int64_t r8_3 = *rbx_1
                                result = (*(r8_3 + 0xe0))(rbx_1, 
                                    sx.q(*(rbx_1 + 0x4c)) + sx.q(*(rbx_1 + 0x3c) * rdi_2) + rsi_1, 
                                    r8_3)
                            else
                                uint64_t count = sx.q(*(rbx_1 + 0x3c))
                                result = memset(
                                    sx.q(*(rbx_1 + 0x4c)) + sx.q(count.d * rdi_2) + rsi_1, 0, count)
                            
                            rcx_5 = rbx_1[7].d
                            rdi_2 += 1
                        while (rdi_2 s< rcx_5)
                    
                    rsi_1 += sx.q(count_2)
                    i_1 = i_2
                    i_2 -= 1
                while (i_1 != 1)
                i_4 = arg3
            
            rbx_1 = rbx_1[0xb]
            count_2 = count_3
            r8 = arg2
            
            if (rbx_1 == 0)
                break

return result
