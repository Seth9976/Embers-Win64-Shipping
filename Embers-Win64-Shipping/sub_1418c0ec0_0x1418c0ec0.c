// 函数: sub_1418c0ec0
// 地址: 0x1418c0ec0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t* rdi = *arg1
int64_t* r8 = rdi
void* r10 = &rdi[sx.q(arg1[1].d)]

if (rdi == r10)
label_1418c0f10:
    r8 = nullptr
else
    while (true)
        char* rax_1 = *r8
        void* r9_2 = arg2 - rax_1
        uint32_t i
        uint32_t rdx
        
        do
            rdx = zx.d(*rax_1)
            i = zx.d(*(rax_1 + r9_2))
            
            if (rdx != i)
                break
            
            rax_1 = &rax_1[1]
        while (i != 0)
        
        if (rdx - i == 0)
            break
        
        r8 = &r8[1]
        
        if (r8 == r10)
            goto label_1418c0f10

int64_t rbx
rbx.b = r8 != 0

if (rdi != 0)
    sub_140a74f90(rdi)

return zx.q(rbx.b)
