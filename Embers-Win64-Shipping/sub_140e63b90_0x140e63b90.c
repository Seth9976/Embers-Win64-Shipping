// 函数: sub_140e63b90
// 地址: 0x140e63b90
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t rsi = 0
int64_t r14 = sx.q(arg3)
int32_t arg_20 = 0

if (r14.d s>= arg1[0x5a].d)
    int64_t rbx_1 = sx.q(arg1[0x5a].d)
    int32_t rdx = (r14 + 1).d
    
    if (rdx s> rbx_1.d)
        arg1[0x5a].d = rdx
        
        if (rdx s> *(arg1 + 0x2d4))
            sub_1405a4f90(&arg1[0x59])
        
        memset((rbx_1 << 4) + arg1[0x59], 0, sx.q(rdx - rbx_1.d) << 4)
    else if (rdx s< rbx_1.d)
        sub_140e860a0(&arg1[0x59], rdx, rbx_1.d - rdx, 1)

int64_t* r15 = arg1[0x59]
void*** r14_1 = r15[r14 * 2 + 1]
arg_20.q = r14_1
void*** rax = r14_1

if (r14_1 != 0)
    int32_t rax_1 = r14_1[1].d
    
    if (rax_1 == 0)
        r14_1 = nullptr
        arg_20.q = 0
        rax = nullptr
    else
        r14_1[1].d = rax_1 + 1
        rax = r14_1

void*** r15_1

if (rax != 0)
    r15_1 = r15[r14 * 2]

if (rax == 0 || r15_1 == 0)
    int32_t rbp_3 = 8
    int64_t r12_1 = 8
    int64_t r13_1 = 0x80
    int64_t var_80
    
    while (true)
        int64_t* var_78
        int128_t var_70
        int64_t* rax_4
        int64_t r15_2
        
        if (r12_1 s< 0 || rbp_3 s>= arg1[0x58].d)
            rsi |= 2
            rax_4 = &var_70
            r15_2 = 0
            var_70 = zx.o(0)
        else
            int64_t* rax_3 = arg1[0x57]
            rsi |= 1
            int64_t* rcx_7 = *(rax_3 + r13_1 + 8)
            r15_2 = *(rax_3 + r13_1)
            var_80 = r15_2
            var_78 = rcx_7
            
            if (rcx_7 != 0)
                rcx_7[1].d += 1
            
            rax_4 = &var_80
        
        int64_t* rdi_2 = rax_4[1]
        rax_4[1] = 0
        *rax_4 = 0
        
        if ((rsi.b & 2) != 0)
            int64_t* rbx_3 = var_70:8.q
            rsi &= 0xfffffffd
            
            if (rbx_3 != 0)
                rbx_3[1].d -= 1
                
                if (rbx_3[1].d == 1)
                    (**rbx_3)(rbx_3)
                    int32_t temp4_1 = *(rbx_3 + 0xc)
                    *(rbx_3 + 0xc) -= 1
                    
                    if (temp4_1 == 1)
                        (*(*rbx_3 + 8))(rbx_3, 1)
        
        if ((rsi.b & 1) != 0)
            rsi &= 0xfffffffe
            
            if (var_78 != 0)
                var_78[1].d -= 1
                
                if (var_78[1].d == 1)
                    (**var_78)(var_78)
                    int32_t temp6_1 = *(var_78 + 0xc)
                    *(var_78 + 0xc) -= 1
                    
                    if (temp6_1 == 1)
                        (*(*var_78 + 8))(var_78, 1)
        
        if (rdi_2 != 0)
            rdi_2[1].d -= 1
            
            if (rdi_2[1].d == 1)
                (**rdi_2)(rdi_2)
                int32_t temp5_1 = *(rdi_2 + 0xc)
                *(rdi_2 + 0xc) -= 1
                
                if (temp5_1 == 1)
                    (*(*rdi_2 + 8))(rdi_2, 1)
        
        if (r15_2 == 0)
            break
        
        rbp_3 += 1
        r12_1 += 1
        r13_1 += 0x10
    
    void*** var_60
    sub_140e83d80(arg1, &var_60, rbp_3, 1)
    void*** rax_11 = j_sub_140a82f30(0x10)
    r15_1 = rax_11
    
    if (rax_11 == 0)
        r15_1 = nullptr
    else
        int32_t rdx_3 = var_60[3].d
        *r15_1 = &data_142ed7710
        *(r15_1 + 0xc) = arg3
        r15_1[1].d = rdx_3
    
    void*** rax_13 = j_sub_140a82f30(0x18)
    void*** rbx_5 = rax_13
    
    if (rax_13 == 0)
        rbx_5 = nullptr
    else
        rax_13[1].d = 1
        *(rax_13 + 0xc) = 1
        *rbx_5 = &data_142d42ea8
        rbx_5[2] = r15_1
    
    void*** var_78_1 = rbx_5
    r14_1 = arg_20.q
    var_80 = 0
    int64_t* rdi_3 = r14_1
    
    if (rbx_5 == r14_1)
    label_140e63e8d:
        
        if (rbx_5 != 0)
            rbx_5[1].d -= 1
            
            if (rbx_5[1].d == 1)
                (**rbx_5)(rbx_5)
                int32_t temp9_1 = *(rbx_5 + 0xc)
                *(rbx_5 + 0xc) -= 1
                
                if (temp9_1 == 1)
                    (*rbx_5)[1](rbx_5, 1)
    else
        void*** var_78_2 = nullptr
        r14_1 = rbx_5
        
        if (rdi_3 != 0)
            rdi_3[1].d -= 1
            
            if (rdi_3[1].d == 1)
                (**rdi_3)(rdi_3)
                int32_t temp10_1 = *(rdi_3 + 0xc)
                *(rdi_3 + 0xc) -= 1
                
                if (temp10_1 == 1)
                    (*(*rdi_3 + 8))(rdi_3, 1)
            
            rbx_5 = var_78_2
            goto label_140e63e8d
    
    int64_t* rbx_7 = (r14 << 4) + arg1[0x59]
    *rbx_7 = r15_1
    int64_t* rcx_20 = rbx_7[1]
    
    if (r14_1 != rcx_20)
        if (r14_1 != 0)
            *(r14_1 + 0xc) += 1
            rcx_20 = rbx_7[1]
        
        if (rcx_20 != 0)
            int32_t temp13_1 = *(rcx_20 + 0xc)
            *(rcx_20 + 0xc) -= 1
            
            if (temp13_1 == 1)
                (*(*rcx_20 + 8))(rcx_20, 1)
        
        rbx_7[1] = r14_1
    
    int64_t* var_58
    
    if (var_58 != 0)
        var_58[1].d -= 1
        
        if (var_58[1].d == 1)
            (**var_58)(var_58)
            int32_t temp12_1 = *(var_58 + 0xc)
            *(var_58 + 0xc) -= 1
            
            if (temp12_1 == 1)
                (*(*var_58 + 8))(var_58, 1)

*arg2 = r15_1
arg2[1] = r14_1

if (r14_1 != 0)
    int32_t rax_21 = r14_1[1].d
    r14_1[1].d = rax_21
    
    if (rax_21 == 0)
        (**r14_1)(r14_1)
        int32_t temp0_1 = *(r14_1 + 0xc)
        *(r14_1 + 0xc) -= 1
        
        if (temp0_1 == 1)
            (*r14_1)[1](r14_1, 1)

return arg2
