// 函数: sub_140ed4670
// 地址: 0x140ed4670
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* rbp = nullptr
char r14 = 0
int32_t rax_1 = (**(arg1 + 0x2a8))(arg1 + 0x2a8)
int64_t rax_2

if (rax_1 s> 0)
    rax_2 = sx.q(*(arg1 + 0x2fc))

int64_t result
int64_t* rbx_9

if (rax_1 s<= 0 || rax_2.d == 0xffffffff)
    rbx_9 = *(arg1 + 0x2d8)
    
    if (rbx_9 != 0)
        int32_t rax_30 = rbx_9[1].d
        
        if (rax_30 != 0)
            rbx_9[1].d = rax_30 + 1
            rax_30.b = 1
        
        if (rax_30.b == 0)
            rbx_9 = nullptr
        
        if (rbx_9 != 0)
            rbp = *(arg1 + 0x2d0)
    
    result = sub_140eda530(rbp, &data_143e244b0, &data_143e244b0, &data_143e244b0, &data_143e244b0)
else
    int64_t* rdi_3 = (rax_2 << 4) + *(arg1 + 0x2b8)
    int64_t* rbx = rdi_3[1]
    int64_t var_88 = *rdi_3
    int64_t* var_80_1 = rbx
    
    if (rbx != 0)
        rbx[1].d += 1
    
    int64_t zmm0_1 = sub_140ebd660()
    sub_140ed9ca0(data_143e2a070, &var_88, zmm0_1)
    
    if (rbx != 0)
        rbx[1].d -= 1
        
        if (rbx[1].d == 1)
            (**rbx)(rbx)
            int32_t temp4_1 = *(rbx + 0xc)
            *(rbx + 0xc) -= 1
            
            if (temp4_1 == 1)
                (*(*rbx + 8))(rbx, 1)
    
    void* var_98
    sub_140f022f0(*rdi_3, &var_98)
    int64_t* rbx_1
    int64_t r15
    
    if (var_98 == 0)
        rbx_1 = 0.q
        r15.b = 0
    else
        sub_140ebd660()
        void* rcx_5 = data_143e2a070
        rbx_1 = *(rcx_5 + 0x1c0)
        int64_t* rax_6 = rbx_1
        
        if (rbx_1 != 0)
            int32_t rax_7 = rbx_1[1].d
            
            if (rax_7 == 0)
                rbx_1 = nullptr
                rax_6 = nullptr
            else
                rbx_1[1].d = rax_7 + 1
                rax_6 = rbx_1
        
        int64_t rdx_3 = 0
        
        if (rax_6 != 0)
            rdx_3 = *(rcx_5 + 0x1b8)
        
        r14 = 1
        
        if (var_98 == rdx_3)
            r15.b = 0
        else
            r15 = 1
    
    if ((r14 & 1) != 0 && rbx_1 != 0)
        rbx_1[1].d -= 1
        
        if (rbx_1[1].d == 1)
            (**rbx_1)(rbx_1)
            int32_t temp6_1 = *(rbx_1 + 0xc)
            *(rbx_1 + 0xc) -= 1
            
            if (temp6_1 == 1)
                (*(*rbx_1 + 8))(rbx_1, 1)
    
    if (r15.b != 0)
        void var_38
        sub_140edadd0(var_98, sub_140f035f0(*rdi_3, &var_38))
        int64_t* var_30
        
        if (var_30 != 0)
            var_30[1].d -= 1
            
            if (var_30[1].d == 1)
                (**var_30)(var_30)
                int32_t r14_1 = *(var_30 + 0xc)
                *(var_30 + 0xc) -= 1
                
                if (r14_1 == 1)
                    (*(*var_30 + 8))(var_30, zx.q(r14_1))
    
    int64_t* r14_2 = *(arg1 + 0x2d8)
    void* r15_1 = *rdi_3
    
    if (r14_2 != 0)
        int32_t rax_15 = r14_2[1].d
        
        if (rax_15 != 0)
            r14_2[1].d = rax_15 + 1
            rax_15.b = 1
        
        if (rax_15.b == 0)
            r14_2 = nullptr
        
        if (r14_2 != 0)
            rbp = *(arg1 + 0x2d0)
    
    void var_48
    int64_t* rax_16 = sub_140effbd0(r15_1, &var_48)
    void var_58
    int64_t* rax_17 = sub_140f02720(r15_1, &var_58)
    void var_68
    int64_t* rax_18 = sub_140f01720(r15_1, &var_68)
    void var_78
    result = sub_140eda530(rbp, sub_140f00a80(r15_1, &var_78), rax_18, rax_17, rax_16)
    
    if (r14_2 != 0)
        r14_2[1].d -= 1
        
        if (r14_2[1].d == 1)
            result = (**r14_2)(r14_2)
            int32_t temp9_1 = *(r14_2 + 0xc)
            *(r14_2 + 0xc) -= 1
            
            if (temp9_1 == 1)
                result = (*(*r14_2 + 8))(r14_2, 1)
    
    int64_t* var_70
    
    if (var_70 != 0)
        var_70[1].d -= 1
        
        if (var_70[1].d == 1)
            result = (**var_70)(var_70)
            int32_t temp11_1 = *(var_70 + 0xc)
            *(var_70 + 0xc) -= 1
            
            if (temp11_1 == 1)
                result = (*(*var_70 + 8))(var_70, 1)
    
    int64_t* var_60
    
    if (var_60 != 0)
        var_60[1].d -= 1
        
        if (var_60[1].d == 1)
            result = (**var_60)(var_60)
            int32_t temp13_1 = *(var_60 + 0xc)
            *(var_60 + 0xc) -= 1
            
            if (temp13_1 == 1)
                result = (*(*var_60 + 8))(var_60, 1)
    
    int64_t* var_50
    
    if (var_50 != 0)
        var_50[1].d -= 1
        
        if (var_50[1].d == 1)
            result = (**var_50)(var_50)
            int32_t temp15_1 = *(var_50 + 0xc)
            *(var_50 + 0xc) -= 1
            
            if (temp15_1 == 1)
                result = (*(*var_50 + 8))(var_50, 1)
    
    int64_t* var_40
    
    if (var_40 != 0)
        var_40[1].d -= 1
        
        if (var_40[1].d == 1)
            result = (**var_40)(var_40)
            int32_t temp16_1 = *(var_40 + 0xc)
            *(var_40 + 0xc) -= 1
            
            if (temp16_1 == 1)
                result = (*(*var_40 + 8))(var_40, 1)
    
    int64_t* var_90
    rbx_9 = var_90

if (rbx_9 != 0)
    rbx_9[1].d -= 1
    
    if (rbx_9[1].d == 1)
        result = (**rbx_9)(rbx_9)
        int32_t temp3_1 = *(rbx_9 + 0xc)
        *(rbx_9 + 0xc) -= 1
        
        if (temp3_1 == 1)
            return (*(*rbx_9 + 8))(rbx_9, 1)

return result
