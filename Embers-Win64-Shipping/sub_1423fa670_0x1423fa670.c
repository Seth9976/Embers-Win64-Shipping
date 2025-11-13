// 函数: sub_1423fa670
// 地址: 0x1423fa670
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

sub_1405ab8c0(arg1)
*arg1 = &data_142d491c8
sub_140d1a380(arg2)
void* rsi = nullptr
int16_t* var_18 = nullptr
int32_t rdx = 0
int32_t var_10 = 0
int32_t rcx_1 = 0
int32_t var_c = 0

if (arg2 != 0 && *arg2 != 0)
    int64_t rbx_1 = -1
    
    do
        rbx_1 += 1
    while (arg2[rbx_1] != 0)
    
    if (rbx_1.d + 1 s> 0)
        sub_1405947f0(&var_18, rbx_1.d + 1)
        rcx_1 = var_c
        rdx = var_10
    
    int32_t rax_1 = rbx_1.d + 1 + rdx
    var_10 = rax_1
    
    if (rax_1 s> rcx_1)
        sub_140594770(&var_18)
    
    UnDecorator::getReferenceType(var_18, arg2, (rbx_1.d + 1) * 2)

rdx.b = 1
sub_140d304e0(&var_18, rdx.b)
int16_t* r10 = var_18
int64_t rcx_6 = sx.q(var_10)
int16_t* r9 = r10
void* rdx_3 = &r10[rcx_6]

if (r10 != rdx_3)
    do
        if (*r9 == 0x2e)
            int32_t r9_2 = ((r9 - r10) s>> 1).d
            
            if (r9_2 != 0xffffffff)
                int32_t rbx_3 = (rcx_6 - 1).d
                
                if (rcx_6.d == 0)
                    rbx_3 = 0
                
                int32_t rbx_4 = rbx_3 - r9_2
                
                if (rbx_4 s> 1)
                    rbx_4 = 1
                
                if (rbx_4 != 0)
                    int32_t rax_3 = rcx_6.d - rbx_4
                    
                    if (rax_3 != r9_2)
                        memmove(&r10[sx.q(r9_2)], &r10[sx.q(rbx_4 + r9_2)], (rax_3 - r9_2) * 2)
                        rcx_6 = zx.q(var_10)
                        r10 = var_18
                    
                    rcx_6 = zx.q(rcx_6.d - rbx_4)
                    var_10 = rcx_6.d
            
            break
        
        r9 = &r9[1]
    while (r9 != rdx_3)

int16_t* const rbx_5 = &data_142d40450
int16_t* const rdx_5 = &data_142d40450

if (rcx_6.d != 0)
    rdx_5 = r10

void* rax_7 = sub_140d1fe00(nullptr, rdx_5)
void* r8_4 = rax_7
void* rax_8

if (rax_7 == 0)
    if (var_10 != 0)
        rbx_5 = var_18
    
    rax_8 = sub_140d23fd0(nullptr, rbx_5, arg3, nullptr, 0)
    r8_4 = rax_8

if (rax_7 != 0 || rax_8 != 0)
    int32_t rax_9 = *(r8_4 + 0xc)
    
    if (rax_9 s< data_143e1d9b4)
        int16_t temp0_1
        int32_t temp1_1
        temp0_1:temp1_1 = sx.q(rax_9)
        uint32_t rdx_8 = zx.d(temp0_1)
        int32_t rax_11 = temp1_1 + rdx_8
        rsi = *(data_143e1d9a0 + (sx.q(rax_11 s>> 0x10) << 3)) + sx.q(zx.d(rax_11.w) - rdx_8) * 0x18
    
    *(rsi + 8) |= 0x40000000

arg1[2] = r8_4

if (r8_4 == 0)
    sub_140d1fc00()

int16_t* rcx_14 = var_18

if (rcx_14 != 0)
    sub_140a74f90(rcx_14)

return arg1
