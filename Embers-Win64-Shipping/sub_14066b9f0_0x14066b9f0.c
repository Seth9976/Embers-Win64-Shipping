// 函数: sub_14066b9f0
// 地址: 0x14066b9f0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t* i = *arg2
void* r14 = nullptr
void* var_38 = nullptr
int32_t i_3 = 0
int32_t r8 = 0
int32_t var_2c = 0
int32_t i_5

for (void* r15 = &i[sx.q(arg2[1].d)]; i != r15; i = &i[1])
    void* rsi_1 = *i
    int64_t i_6 = sx.q(i_3)
    i_3 = (i_6 + 1).d
    i_5 = i_3
    
    if (i_3 s> r8)
        sub_140610660(&var_38)
        r8 = var_2c
        i_3 = i_5
        r14 = var_38
    
    int64_t rcx_2 = i_6 * 2
    *(r14 + (rcx_2 << 3)) = *(rsi_1 + 0x28)
    void* rax_2 = *(rsi_1 + 0x30)
    *(r14 + (rcx_2 << 3) + 8) = rax_2
    
    if (rax_2 != 0)
        *(rax_2 + 8) += 1

void*** rax_3 = j_sub_140a82f30(0x20)
void*** rbx = rax_3

if (rax_3 == 0)
    rbx = nullptr
else
    rax_3[1].d = 0
    *rbx = &data_142d84d00
    rbx[2] = 0
    rbx[3].d = i_3
    
    if (i_3 != 0)
        sub_14061cb30(&rbx[2], i_3, 0)
        int64_t* rdx_2 = rbx[2]
        int32_t i_4 = i_3
        void* rcx_4 = r14
        int32_t i_1
        
        do
            *rdx_2 = *rcx_4
            void* rax_5 = *(rcx_4 + 8)
            rdx_2[1] = rax_5
            
            if (rax_5 != 0)
                *(rax_5 + 8) += 1
            
            rdx_2 = &rdx_2[2]
            rcx_4 += 0x10
            i_1 = i_4
            i_4 -= 1
        while (i_1 != 1)
        rbx[1].d = 5
    else
        *(rbx + 0x1c) = 0
        rbx[1].d = 5

void*** rax_6 = j_sub_140a82f30(0x18)

if (rax_6 == 0)
    rax_6 = nullptr
else
    rax_6[1].d = 1
    *rax_6 = &data_142d86170
    *(rax_6 + 0xc) = 1
    rax_6[2] = rbx

void* rax_7 = sub_140cde0b0()
sub_140d19010(rax_7, 
    NewObject with empty name can't be used to create default subobjects (inside of UObject derived "
"class constructor) as it produces incon")
int64_t arg_10 = 0
void* result = sub_140d2dfc0(sub_140681360(), rax_7, 0, 0, 0, 0, 0, 0, 0)
uint128_t zmm1 = rbx.o
var_38.o = zmm1
int64_t* rbx_2 = _mm_bsrli_si128(zmm1, 8).q

if (rbx_2 != 0)
    rbx_2[1].d += 1
    rbx_2 = rax_6

if (&var_38 != result + 0x28)
    uint128_t zmm0 = *(result + 0x28)
    *(result + 0x28) = zmm1
    rbx_2 = rax_6
    var_38.o = zmm0

int64_t* rsi_2 = i_5.q

if (rsi_2 != 0)
    rsi_2[1].d -= 1
    
    if (rsi_2[1].d == 1)
        (**rsi_2)(rsi_2)
        int32_t temp3_1 = *(rsi_2 + 0xc)
        *(rsi_2 + 0xc) -= 1
        
        if (temp3_1 == 1)
            (*(*rsi_2 + 8))(rsi_2, 1)
    
    rbx_2 = rax_6

if (rbx_2 != 0)
    rbx_2[1].d -= 1
    
    if (rbx_2[1].d == 1)
        (**rbx_2)(rbx_2)
        int32_t temp4_1 = *(rbx_2 + 0xc)
        *(rbx_2 + 0xc) -= 1
        
        if (temp4_1 == 1)
            (*(*rbx_2 + 8))(rbx_2, 1)

if (i_3 != 0)
    int64_t* rsi_3 = r14 + 8
    int32_t i_2
    
    do
        int64_t* rbx_3 = *rsi_3
        
        if (rbx_3 != 0)
            rbx_3[1].d -= 1
            
            if (rbx_3[1].d == 1)
                (**rbx_3)(rbx_3)
                int32_t temp7_1 = *(rbx_3 + 0xc)
                *(rbx_3 + 0xc) -= 1
                
                if (temp7_1 == 1)
                    (*(*rbx_3 + 8))(rbx_3, 1)
        
        rsi_3 = &rsi_3[2]
        i_2 = i_3
        i_3 -= 1
    while (i_2 != 1)

if (r14 != 0)
    sub_140a74f90(r14)

return result
