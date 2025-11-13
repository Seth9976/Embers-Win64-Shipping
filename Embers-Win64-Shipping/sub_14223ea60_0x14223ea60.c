// 函数: sub_14223ea60
// 地址: 0x14223ea60
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* r8 = *arg1
int32_t i = 0

if (*(r8 + 0xd8) s<= 0)
    return 

int64_t* rdi_1 = nullptr
void* rax

do
    rax = r8
    
    if (i s< *(r8 + 0xc8))
        void* rcx = *(rdi_1 + *(r8 + 0xc0))
        rax = r8
        
        if (rcx != 0)
            sub_1422529b0(rcx, *(r8 + 0xd0) + sx.q(i) * 0x24, *(r8 + 0xb0))
            rax = *arg1
    
    i += 1
    rdi_1 = &rdi_1[2]
    r8 = rax
while (i s< *(rax + 0xd8))
