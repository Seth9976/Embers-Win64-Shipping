// 函数: sub_142c7b8c0
// 地址: 0x142c7b8c0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t rdi = -1
void* rcx = *arg1
char* rsi = *(rcx + 0xa80)

do
    rdi += 1
while (rsi[rdi] != 0)

if (arg2 != 0x2b)
    sub_142c64760(rcx, "Got unexpected pop3-server response", arg3, arg4)
    return 8

if (rdi u>= 4 && rsi[rdi - 2] == 0x3e)
    void* i = 3
    
    if (3 u< rdi - 2)
        do
            if (*(i + rsi) == 0x3c)
                void* rdi_1 = rdi - i
                
                if (rdi_1 != 1)
                    int64_t rax_2 = data_143ccb8b8(1, rdi_1)
                    arg1[0xe9] = rax_2
                    
                    if (rax_2 != 0)
                        memcpy(rax_2, i + rsi, (rdi_1 - 1).d)
                        *(rdi_1 - 1 + arg1[0xe9]) = 0
                        arg1[0xe8].d |= 2
                
                break
            
            i += 1
        while (i u< rdi - 2)

*(arg1 + 0x72c) = 0
*(arg1 + 0x734) = 0
arg1[0xea].b = 0
int32_t result = gzprintf(&arg1[0xd3], &data_1434ccff0, "CAPA", arg4)

if (result == 0)
    arg1[0xe1].d = 2

return result
