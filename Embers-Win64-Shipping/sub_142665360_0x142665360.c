// 函数: sub_142665360
// 地址: 0x142665360
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

if (arg1[1].d == *(arg1 + 0x34))
    return 0

void* r8 = arg1[8]
int32_t r14 = 0
void* r15 = &arg1[7]
void* rax_6 = r15
int64_t rdx_3 = ((sx.q(sx.d((int.d(fconvert.t(*(arg2 + 4)))).w) << 0x10)
    | sx.q((int.d(fconvert.t(*(arg2 + 8)))).w)) ^ sx.q(int.d(fconvert.t(*(arg2 + 0xc)))))
    & sx.q(arg1[9].d - 1)

if (r8 != 0)
    rax_6 = r8

void* rsi = rax_6 + (rdx_3 << 2)
int32_t i = *(rax_6 + (rdx_3 << 2))

while (i != 0xffffffff)
    void* rbx_3 = (sx.q(i) << 6) + *arg1
    
    if (sub_142645ba0(rbx_3, arg2) != 0)
        int64_t rbx_4 = sx.q(*rsi)
        
        if (arg1[1].d != *(arg1 + 0x34))
            void* rdx_5 = *(r15 + 8)
            void* r8_1 = *arg1
            int64_t r9_2 = rbx_4 << 6
            int64_t rcx_7 = sx.q(arg1[9].d - 1) & sx.q(*(r9_2 + r8_1 + 0x3c))
            
            if (rdx_5 != 0)
                r15 = rdx_5
            
            int32_t j = *(r15 + (rcx_7 << 2))
            void* rdx_6 = r15 + (rcx_7 << 2)
            
            for (; j != 0xffffffff; j = *rdx_6)
                if (j == rbx_4.d)
                    *rdx_6 = *(r9_2 + r8_1 + 0x38)
                    break
                
                rdx_6 = r8_1 + 0x38 + (sx.q(j) << 6)
        
        int64_t rcx_8 = *((rbx_4 << 6) + *arg1 + 0x20)
        
        if (rcx_8 != 0)
            sub_140a74f90(rcx_8)
        
        r14 = 1
        sub_1405c37b0(arg1, rbx_4.d, 1)
        break
    
    i = *(rbx_3 + 0x38)
    rsi = rbx_3 + 0x38

return zx.q(r14)
