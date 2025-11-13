// 函数: sub_142c7ca10
// 地址: 0x142c7ca10
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* r15 = *arg1
int64_t rsi = -1
char* rdi = *(r15 + 0xa80)

do
    rsi += 1
while (rdi[rsi] != 0)

int32_t result

if (arg2 - 0xc8 u< 0x64 || arg2 == 1)
    if (rsi - 4 u>= 8 && *(rdi + 4) == 0x534c545452415453)
        arg1[0xe7].b = 1
    else if (rsi - 4 u>= 4 && *(rdi + 4) == 0x455a4953)
        *(arg1 + 0x739) = 1
    else if (rsi - 4 u>= 5 && *(rdi + 4) == 0x48545541 && rdi[8] == 0x20)
        void* rdi_1 = &rdi[9]
        void* rsi_2 = rsi - 9
        *(arg1 + 0x73a) = 1
    label_142c7cb60:
        
        if (rsi_2 != 0)
            while (true)
                char rax_6 = *rdi_1
                
                if (rax_6 u<= 0x20 && test_bit(0x100002600, sx.q(rax_6)))
                    rdi_1 += 1
                    void* temp0_1 = rsi_2
                    rsi_2 -= 1
                    
                    if (temp0_1 == 1)
                        break
                    
                    continue
                
                char* rbx_1 = nullptr
                
                if (rsi_2 != 0)
                    do
                        char rax_9 = *(rbx_1 + rdi_1)
                        
                        if (rax_9 u<= 0x20 && test_bit(0x100002600, sx.q(rax_9)))
                            break
                        
                        rbx_1 = &rbx_1[1]
                    while (rbx_1 u< rsi_2)
                
                int64_t arg_8
                int32_t rax_11
                rax_11, arg3 = sub_142c8f8d0(rdi_1, rbx_1, &arg_8)
                
                if (rax_11 != 0 && arg_8 == rbx_1)
                    *(arg1 + 0x724) |= rax_11
                
                rdi_1 += rbx_1
                rsi_2 -= rbx_1
                goto label_142c7cb60
    
    if (arg2 == 1)
        return 0
    
    int32_t rax_8 = *(r15 + 0x5f8)
    
    if (rax_8 == 0 || arg1[0x58].b != 0)
        return sub_142c7c430(arg1) __tailcall
    
    if (arg1[0xe7].b == 0)
        if (rax_8 == 1)
            return sub_142c7c430(arg1) __tailcall
        
        sub_142c64760(r15, "STARTTLS not supported.", arg3, arg4)
        return 0x40
    
    result = gzprintf(&arg1[0xd3], &data_1434ccff0, "STARTTLS", arg4)
    
    if (result == 0)
        arg1[0xe1].d = 4
else
    if (*(r15 + 0x5f8) s> 1 && arg1[0x58].b == 0)
        sub_142c64760(r15, "Remote access denied: %d", zx.q(arg2), arg4)
        return 9
    
    int64_t r8_1 = arg1[0xe2]
    *(arg1 + 0x72c) = 0
    result = gzprintf(&arg1[0xd3], "HELO %s", r8_1, arg4)
    
    if (result == 0)
        arg1[0xe1].d = 3

return result
