// 函数: sub_142c7bff0
// 地址: 0x142c7bff0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* rbp = *arg1
int64_t r13 = 0
int64_t arg_8 = 0
int64_t arg_18 = 0
int64_t r14 = *(rbp + 0x4b08)
void* rbx = *(rbp + 0x250)

if (r14 == 0 || *(rbp + 0x3da) != 0)
    arg_18 = r14
    int64_t rax_3
    int64_t r8_1
    rax_3, r8_1 = data_143ccb898(sx.q(*(rbp + 0x598) * 2))
    arg_8 = rax_3
    r13 = rax_3
    r14 = rax_3
    
    if (rax_3 == 0)
        sub_142c64760(rbp, "Failed to alloc scratch buffer!", r8_1, arg3)
        return zx.q((r14 + 0x1b).d)

char* rsi = nullptr
char* rdi = nullptr
int64_t r15 = *(rbx + 0x18)

if (arg2 s> 0)
    do
        int64_t r8_2 = *(rbx + 0x18)
        
        if ((*"\r\n.\r\n")[r8_2] == rsi[*(rbp + 0x240)])
            *(rbx + 0x18) = r8_2 + 1
            
            if (r8_2 == 1 || r8_2 == 4)
                *(rbx + 0x20) = 1
            else
                *(rbx + 0x20) = 0
        else if (r8_2 != 0)
            memcpy(&rdi[r14], &(*"\r\n.\r\n")[r15], r8_2.d - r15.d)
            rdi = &rdi[*(rbx + 0x18) - r15]
            int64_t rcx_3
            rcx_3.b = rsi[*(rbp + 0x240)] == 0xd
            r15 = 0
            *(rbx + 0x20) = 0
            *(rbx + 0x18) = rcx_3
        
        int64_t rax_10 = *(rbx + 0x18)
        
        if (rax_10 == 3)
            memcpy(&rdi[r14], &(*"\r\n..")[r15], 4 - r15.d)
            *(rbx + 0x18) = 0
            rdi = &rdi[4 - r15]
            r15 = 0
        else if (rax_10 == 0)
            rdi[r14] = rsi[*(rbp + 0x240)]
            rdi = &rdi[1]
        
        rsi = &rsi[1]
    while (rsi s< arg2)
    
    r13 = arg_8

int64_t r8_6 = *(rbx + 0x18)

if (r8_6 != r15)
    memcpy(&rdi[r14], &(*"\r\n.\r\n")[r15], r8_6.d - r15.d)
    rdi = &rdi[*(rbx + 0x18) - r15]

if (rdi == arg2)
    data_143ccb8a0(r13)
else
    *(rbp + 0x240) = r14
    *(rbp + 0x4b08) = r14
    data_143ccb8a0(arg_18)
    *(rbp + 0x238) = rdi

return 0
