// 函数: sub_140e83d80
// 地址: 0x140e83d80
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

uint64_t r12
uint64_t var_28 = r12
int64_t r13 = sx.q(arg3)
int128_t zmm6 = zx.o(0)
int128_t var_68 = zx.o(0)
void* var_78
int64_t* rdi

if (r13.d != 0)
label_140e83e9e:
    
    if (arg4 != 0)
        rdi = var_68:8.q
    else
        int64_t* rax_5 = sub_140e48b60()
        var_78 = &rax_5[2]
        int64_t* rbx_3 = rax_5
        int64_t* rax_6 = rbx_3
        
        if (rbx_3 != 0)
            rbx_3[1].d += 1
            rbx_3 = rax_5
        
        rdi = var_68:8.q
        var_68.q = var_78
        
        if (rax_6 != 0)
            rdi = rax_6
        
        var_68:8.q = rdi
        
        if (rbx_3 != 0)
            rbx_3[1].d -= 1
            
            if (rbx_3[1].d == 1)
                (**rbx_3)(rbx_3)
                int32_t temp2_1 = *(rbx_3 + 0xc)
                *(rbx_3 + 0xc) -= 1
                
                if (temp2_1 == 1)
                    (*(*rbx_3 + 8))(rbx_3, 1)
        
        zmm6 = var_68
else
    void* rax_1 = data_143e20d18
    
    if (rax_1 == 0)
        goto label_140e83e9e
    
    void* rcx = *(rax_1 + 8)
    
    if (rcx == 0)
        goto label_140e83e9e
    
    void* rax_2 = *(rax_1 + 0x10)
    var_78 = rcx
    void* var_70_1 = rax_2
    
    if (rax_2 != 0)
        *(rax_2 + 8) += 1
    
    zmm6 = var_78.o
    int64_t temp0_1 = _mm_bsrli_si128(zx.o(0), 8)
    
    if (temp0_1 != 0)
        int32_t temp1_1 = *(temp0_1 + 8)
        *(temp0_1 + 8) -= 1
        
        if (temp1_1 == 1)
            (**temp0_1)(temp0_1)
            int32_t temp3_1 = *(temp0_1 + 0xc)
            *(temp0_1 + 0xc) -= 1
            
            if (temp3_1 == 1)
                (*(*temp0_1 + 8))(temp0_1, 1)
    
    rdi = zmm6:8.q

var_78.o = zmm6

if (rdi != 0)
    rdi[1].d += 1

uint128_t zmm0_1 = sub_140e5cf40(arg2, r13.d, &var_78)

if (r13.d s>= arg1[0x58].d)
    int64_t rbx_2 = sx.q(arg1[0x58].d)
    int32_t rdx_1 = (r13 + 1).d
    
    if (rdx_1 s> rbx_2.d)
        arg1[0x58].d = rdx_1
        
        if (rdx_1 s> *(arg1 + 0x2c4))
            sub_1405a4f90(&arg1[0x57])
        
        zmm0_1 = memset((rbx_2 << 4) + arg1[0x57], 0, sx.q(rdx_1 - rbx_2.d) << 4)
    else if (rdx_1 s< rbx_2.d)
        zmm0_1 = sub_140dbae50(&arg1[0x57], rdx_1, rbx_2.d - rdx_1, 1)

int64_t* rax_9 = arg2[1]

if (rax_9 != 0)
    rax_9[1].d += 1

void**** rcx_14 = (r13 << 4) + arg1[0x57]

if (rcx_14 == &var_78)
label_140e83f87:
    
    if (rax_9 != 0)
        rax_9[1].d -= 1
        
        if (rax_9[1].d == 1)
            (**rax_9)(rax_9)
            int32_t temp6_1 = *(rax_9 + 0xc)
            *(rax_9 + 0xc) -= 1
            
            if (temp6_1 == 1)
                (*(*rax_9 + 8))(rax_9, 1)
else
    *rcx_14 = *arg2
    int64_t* rsi_2 = rcx_14[1]
    
    if (rax_9 == rsi_2)
        goto label_140e83f87
    
    rcx_14[1] = rax_9
    
    if (rsi_2 != 0)
        rsi_2[1].d -= 1
        
        if (rsi_2[1].d == 1)
            (**rsi_2)(rsi_2)
            int32_t temp8_1 = *(rsi_2 + 0xc)
            *(rsi_2 + 0xc) -= 1
            
            if (temp8_1 == 1)
                (*(*rsi_2 + 8))(rsi_2, 1)

if ((*arg2)[0xc].d s<= 0 && arg1[0x5b] != 0)
    int64_t* rbx_6 = arg1[0x5c]
    
    if (rbx_6 != 0)
        int32_t rax_14 = rbx_6[1].d
        
        if (rax_14 s> 0)
            int64_t* var_70_3 = rbx_6
            var_78 = nullptr
            
            if (rbx_6 != 0)
                if (rax_14 != 0)
                    rbx_6[1].d = rax_14 + 1
                    rax_14.b = 1
                
                if (rax_14.b == 0)
                    int64_t var_70_4 = 0
                    rbx_6 = nullptr
                
                if (rbx_6 != 0)
                    var_78 = arg1[0x5b]
            
            sub_140e8ab30(arg1, (*arg2)[3].d, &var_78, arg1[0x5d].b, zmm0_1)
            
            if (rbx_6 != 0)
                rbx_6[1].d -= 1
                
                if (rbx_6[1].d == 1)
                    (**rbx_6)(rbx_6)
                    int32_t temp13_1 = *(rbx_6 + 0xc)
                    *(rbx_6 + 0xc) -= 1
                    
                    if (temp13_1 == 1)
                        (*(*rbx_6 + 8))(rbx_6, 1)

r12.b = 0
*(arg1 + 0x50c) += 1
int32_t rax_19 = arg1[0xa0].d
int32_t rcx_21 = *(arg1 + 0x50c)
int64_t rsi_3 = sx.q(rax_19 - 1)

if (rax_19 - 1 s>= 0)
    int64_t rbx_8 = rsi_3 << 4
    int64_t temp11_1
    
    do
        int64_t rax_21 = arg1[0x9f]
        
        if (*(rbx_8 + rax_21 + 8) == 0)
            r12.b = 1
        else
            int64_t* rcx_22 = *(rbx_8 + rax_21)
            
            if (rcx_22 == 0)
                r12.b = 1
            else if ((*(*rcx_22 + 0x50))(rcx_22, zx.q(r13.d)) == 0)
                r12.b = 1
        
        rbx_8 -= 0x10
        temp11_1 = rsi_3
        rsi_3 -= 1
    while (temp11_1 - 1 s>= 0)
    rcx_21 = *(arg1 + 0x50c)

*(arg1 + 0x50c) = rcx_21 - 1

if (r12.b != 0)
    sub_140599630(&arg1[0x9f], 0)

if (rdi != 0)
    rdi[1].d -= 1
    
    if (rdi[1].d == 1)
        (**rdi)(rdi)
        int32_t temp10_1 = *(rdi + 0xc)
        *(rdi + 0xc) -= 1
        
        if (temp10_1 == 1)
            int64_t r8_6 = *rdi
            (*(r8_6 + 8))(rdi, 1, r8_6)

return arg2
