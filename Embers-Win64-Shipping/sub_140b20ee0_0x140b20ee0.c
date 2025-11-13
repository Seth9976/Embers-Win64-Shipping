// 函数: sub_140b20ee0
// 地址: 0x140b20ee0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t rsi = 0
int16_t* var_38 = nullptr
int32_t var_30 = 0
sub_1405947f0(&var_38, 0xf)
int32_t rdi = var_30 + 0xf

if (rdi s> 0)
    sub_140594770(&var_38)

int16_t* r13 = var_38
UnDecorator::getReferenceType(r13, u"/?:&\*"<>|%#@^", 0x1e)
int32_t rax = arg2[1].d
int16_t* rbx = nullptr
var_38 = nullptr
var_30 = 0
int32_t i_6 = rax - 1

if (rax == 0)
    i_6 = 0

var_30 = i_6 + 1

if (i_6 + 1 s> 0)
    sub_140594770(&var_38)
    rbx = var_38

int64_t i_5 = sx.q(i_6)

if (i_6 s> 0)
    int16_t* r8 = rbx
    int64_t i_3 = i_5
    void* rdx_3 = &r13[sx.q(rdi)]
    int64_t i
    
    do
        int16_t rcx_4 = *(*arg2 - rbx + r8)
        int16_t* rax_5 = r13
        
        if (r13 != rdx_3)
            do
                if (*rax_5 == rcx_4)
                    if (((rax_5 - r13) s>> 1).d != 0xffffffff)
                        rcx_4 = arg3
                    
                    break
                
                rax_5 = &rax_5[1]
            while (rax_5 != rdx_3)
        
        *r8 = rcx_4
        r8 = &r8[1]
        i = i_3
        i_3 -= 1
    while (i != 1)

rbx[i_5] = 0

if (arg3 == 0)
    int32_t rdx_4 = 0
    int32_t r10_1 = 0
    
    if (i_6 s> 0)
        int64_t i_4 = 0
        int64_t i_1 = 0
        
        do
            if (rbx[i_4] == 0)
                int32_t rcx_5 = r10_1
                
                if (i_1 s>= i_4)
                    rcx_5 = rdx_4
                
                rdx_4 = rcx_5 + 1
                int64_t i_2 = i_4
                
                if (i_1 s>= i_4)
                    i_2 = i_1
                
                for (i_1 = i_2 + 1; i_1 s< i_5; i_1 += 1)
                    if (rbx[i_1] != 0)
                        if (i_1 s< i_5)
                            rbx[i_4] = rbx[i_1]
                            rbx[i_1] = 0
                        
                        break
                    
                    rdx_4 += 1
            
            r10_1 += 1
            i_4 += 1
        while (i_4 s< i_5)

*arg1 = 0
arg1[1] = 0

if (rbx != 0)
    if (*rbx != 0)
        int64_t rdi_1 = -1
        
        do
            rdi_1 += 1
        while (rbx[rdi_1] != 0)
        
        if (rdi_1.d + 1 s> 0)
            sub_1405947f0(arg1, rdi_1.d + 1)
            rsi = arg1[1].d
        
        int32_t rax_8 = rdi_1.d + 1 + rsi
        arg1[1].d = rax_8
        
        if (rax_8 s> *(arg1 + 0xc))
            sub_140594770(arg1)
        
        UnDecorator::getReferenceType(*arg1, rbx, (rdi_1.d + 1) * 2)
    
    sub_140a74f90(rbx)

if (r13 != 0)
    sub_140a74f90(r13)

return arg1
