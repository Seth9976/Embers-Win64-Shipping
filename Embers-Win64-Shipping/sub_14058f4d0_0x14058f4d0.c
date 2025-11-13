// 函数: sub_14058f4d0
// 地址: 0x14058f4d0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t r14 = arg1[3]
void* rdi = arg1
void** rsi = arg1

if (r14 u>= 8)
    rsi = *arg1

void* rax = rdi

if (r14 u>= 8)
    rax = *arg1

int64_t r11 = arg1[2]
void* rbx = rdi
void* rbp = rax + (r11 << 1)

if (r14 u>= 8)
    rbx = *arg1

if (rbx != rbp)
    void* rsi_1 = rsi - rbx
    
    do
        *(rsi_1 + rbx) = tolower(zx.d(*rbx))
        rbx += 2
    while (rbx != rbp)
    
    r11 = *(rdi + 0x10)
    r14 = *(rdi + 0x18)

wchar16 const (** const r10)[0x5] = &data_1437029e0
int64_t* rax_3
wchar16* r8_2

while (true)
    wchar16 const (* rax_2)[0x5] = *r10
    int64_t rcx_1 = -1
    
    do
        rcx_1 += 1
    while ((*rax_2)[rcx_1] != 0)
    
    void* r9_1 = rdi
    
    if (r14 u>= 8)
        r9_1 = *rdi
    
    if (r11 != rcx_1)
    label_14058f5ba:
        r10 = &r10[2]
        
        if (r10 != "Fail to prepare video frame for writing: ")
            continue
    else
        int64_t r8_1 = r11
        
        if (r11 != 0)
            int16_t rcx_2 = *r9_1
            wchar16 const rdx_1 = *rax_2
            
            if (rcx_2 u< rdx_1)
                goto label_14058f5ba
            
            int64_t r9_2 = r9_1 - rax_2
            bool cond:3_1 = rcx_2 u> rdx_1
            
            while (true)
                if (cond:3_1)
                    goto label_14058f5ba
                
                if (r8_1 == 1)
                    break
                
                int16_t rcx_3 = *(r9_2 + rax_2 + 2)
                rax_2 = &(*rax_2)[1]
                r8_1 -= 1
                wchar16 const rdx_2 = *rax_2
                cond:3_1 = rcx_3 u> rdx_2
                
                if (rcx_3 u< rdx_2)
                    goto label_14058f5ba
        
        if (r10 != "Fail to prepare video frame for writing: ")
            return zx.q(r10[1].d)
    
    rax_3 = sub_140593a10(std::wcerr, "Unrecognized screenshot format "")
    r8_2 = *(rdi + 0x10)
    break

if (*(rdi + 0x18) u>= 8)
    rdi = *rdi

std::wostream::operator<<(
    sub_140593a10(sub_1405943c0(rax_3, rdi, r8_2), "". Using "tga" as fallback."), sub_140593eb0)
return 0xffff0002
