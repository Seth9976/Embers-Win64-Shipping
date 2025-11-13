// 函数: sub_1420318c0
// 地址: 0x1420318c0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t arg_18 = arg3
int64_t* rsi = arg4
int64_t* r15 = arg1

if ((*(*arg1 + 0x178))() != 0)
    int64_t* rbx_1 = rsi[2]
    
    if (rbx_1 != 0)
        rbx_1[1].d -= 1
        
        if (rbx_1[1].d == 1)
            (**rbx_1)(rbx_1)
            int32_t temp1_1 = *(rbx_1 + 0xc)
            *(rbx_1 + 0xc) -= 1
            
            if (temp1_1 == 1)
                (*(*rbx_1 + 8))(rbx_1, 1)
    
    return 0

void* rax_4 = r15[0xa]
int64_t rdi
int64_t arg_10 = rdi
int32_t var_94

if (rax_4 == 0)
    var_94 = 0
label_1420319c2:
    
    if (((*(arg2 + 0xb8) u>> 3).b & 1) != 0 && sub_140d6de70(rsi) != 0)
        int64_t* rcx_6 = data_143f5b298
        (*(*rcx_6 + 0x378))(rcx_6, &r15[-5], &arg_18)
else
    int32_t rcx_2 = *(*(rax_4 + 0x188) + 0x40)
    var_94 = rcx_2
    
    if (rcx_2 s<= 1)
        goto label_1420319c2
    
    if (sub_140d6de70(rsi) == 0)
        goto label_1420319c2
    
    int64_t* rax_7 = sub_141520bd0()
    void* rax_8 = rax_7[0x23]
    
    if (rax_8 == 0)
        int64_t rdx_1 = *rax_7
        (*(rdx_1 + 0x390))(rax_7, rdx_1)
        rax_8 = rax_7[0x23]
    
    if (*(rax_8 + 0x54) == 0)
        goto label_1420319c2
    
    arg_18 += 1

int64_t rax_13 = *rsi
int64_t* rbx_3 = rsi[2]
int64_t rax_14 = rsi[1]

if (rbx_3 != 0)
    rbx_3[1].d += 1

int32_t r8_1 = arg_18
void* r12 = &r15[0x5b]
*(r12 + 0x14) += 1
char rdx = 0
int32_t rax_15 = *(r12 + 8)
int32_t rcx_7 = *(r12 + 0x14)
int128_t zmm6 = arg7
int128_t zmm7 = arg6
int64_t r14 = sx.q(rax_15 - 1)
char var_98 = 0
char var_a8
char var_a0
int64_t var_78

if (rax_15 - 1 s>= 0)
    rdi = r14 << 4
    int64_t temp5_1
    
    do
        int64_t rcx_8 = *r12
        int64_t* rcx_9
        
        if (*(rdi + rcx_8 + 8) == 0)
            rcx_9 = nullptr
        else
            rcx_9 = *(rdi + rcx_8)
        
        char rax_18
        
        if (rcx_9 != 0)
            var_78 = rax_13
            int64_t var_70_1 = rax_14
            int64_t* var_68_1 = rbx_3
            
            if (rbx_3 != 0)
                rbx_3[1].d += 1
            
            var_a0 = arg9
            var_a8.d = arg8
            rax_18 = (*(*rcx_9 + 0x50))(rcx_9, arg2, arg5, &var_78, zmm7.d, zmm6.d, var_a8, var_a0, 
                var_98, r8_1, rax_13, rax_14)
        
        if (rcx_9 != 0 && rax_18 != 0)
            rdx = var_98
        else
            rdx = 1
            var_98 = 1
        
        rdi -= 0x10
        temp5_1 = r14
        r14 -= 1
    while (temp5_1 - 1 s>= 0)
    rcx_7 = *(r12 + 0x14)
    rsi = arg4
    r15 = arg1

*(r12 + 0x14) = rcx_7 - 1

if (rdx != 0)
    sub_140599630(r12, 0)

if (rbx_3 != 0)
    rbx_3[1].d -= 1
    
    if (rbx_3[1].d == 1)
        (**rbx_3)(rbx_3)
        int32_t temp4_1 = *(rbx_3 + 0xc)
        *(rbx_3 + 0xc) -= 1
        
        if (temp4_1 == 1)
            (*(*rbx_3 + 8))(rbx_3, 1)

rdi.b = 0

if (((*(arg2 + 0xb8)).b & 0x18) != 0x18)
label_142031b3a:
    int64_t* rcx_14 = r15[3]
    int32_t rbx_4
    char r12_1
    
    if (rcx_14 == 0)
        r12_1 = arg9
        rbx_4 = arg8
    label_142031bb4:
        void* rax_31
        int512_t zmm2
        int512_t zmm3_1
        int128_t zmm6_1
        int128_t zmm7_1
        rax_31, zmm2, zmm3_1, zmm6_1, zmm7_1 = sub_1423dda40(data_143f5b298, &r15[-5], arg_18)
        
        if (rax_31 == 0)
        label_142031c1a:
            
            if (arg_18 s> var_94 - 1 && (1 & (*(arg2 + 0xb8) u>> 3).b) != 0)
                int64_t* rcx_20 = data_143f5b298
                void* rax_38 = (*(*rcx_20 + 0x370))(rcx_20, &r15[-5])
                
                if (rax_38 != 0)
                    var_78 = *rsi
                    int64_t var_70_4 = rsi[1]
                    void* rcx_23 = rsi[2]
                    void* var_68_4 = rcx_23
                    
                    if (rcx_23 != 0)
                        *(rcx_23 + 8) += 1
                    
                    var_a8.d = arg8
                    rdi = zx.q((*(*(rax_38 + 0x28) + 0x50))(rax_38 + 0x28, arg2, 
                        zx.q(arg_18 - var_94), &var_78, zmm7_1.d, zmm6_1.d, var_a8, r12_1, var_98, 
                        r8_1, rax_13, rax_14))
        else
            int64_t* r8_4 = *(rax_31 + 0x30)
            
            if (r8_4 == 0)
                goto label_142031c1a
            
            var_78 = *rsi
            int64_t var_70_3 = rsi[1]
            void* rcx_18 = rsi[2]
            void* var_68_3 = rcx_18
            
            if (rcx_18 != 0)
                *(rcx_18 + 8) += 1
                r8_4 = *(rax_31 + 0x30)
            
            int32_t var_b0
            var_b0.b = r12_1
            zmm3_1.o = zmm6_1
            zmm2.o = zmm7_1
            char rax_33 = (*(*r8_4 + 0xc00))(r8_4, &var_78, zmm2, zmm3_1, rbx_4, var_b0, var_a8, 
                var_a0, var_98, r8_1, rax_13, rax_14)
            rdi = zx.q(rax_33)
            
            if (rax_33 == 0)
                goto label_142031c1a
    else
        var_78 = *rsi
        int64_t var_70_2 = rsi[1]
        void* rax_28 = rsi[2]
        void* var_68_2 = rax_28
        
        if (rax_28 != 0)
            *(rax_28 + 8) += 1
            rcx_14 = r15[3]
        
        r12_1 = arg9
        int512_t zmm3
        zmm3.o = zmm7
        rbx_4 = arg8
        var_a8 = r12_1
        char rax_30 = (*(*rcx_14 + 0x320))(rcx_14, zx.q(arg_18), &var_78, zmm3, zmm6.d, rbx_4, 
            var_a8, var_a0, var_98, r8_1, rax_13, rax_14)
        rdi = zx.q(rax_30)
        
        if (rax_30 == 0)
            goto label_142031bb4
    rdi = zx.q(rdi.b)
    
    if ((*(arg2 + 0xb8) & 0x18) == 0x18)
        rdi = 1
else
    int64_t* rcx_13 = r15[3]
    
    if (rcx_13 == 0)
        goto label_142031b3a
    
    if ((*(*rcx_13 + 0x340))(rcx_13) == 0)
        goto label_142031b3a

int64_t* rbx_6 = rsi[2]

if (rbx_6 != 0)
    rbx_6[1].d -= 1
    
    if (rbx_6[1].d == 1)
        (**rbx_6)(rbx_6)
        int32_t temp7_1 = *(rbx_6 + 0xc)
        *(rbx_6 + 0xc) -= 1
        
        if (temp7_1 == 1)
            (*(*rbx_6 + 8))(rbx_6, 1)

return zx.q(rdi.b)
