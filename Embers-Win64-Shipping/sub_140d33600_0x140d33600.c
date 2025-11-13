// 函数: sub_140d33600
// 地址: 0x140d33600
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_198
int64_t rax_1 = __security_cookie ^ &var_198
char* rax_2 = *(arg2 + 0x20)
int64_t* var_170 = nullptr
int64_t r14 = arg3
uint32_t rcx = zx.d(*rax_2)
*(arg2 + 0x20) = &rax_2[1]
(&data_143e1cd60)[zx.q(rcx)](arg1, arg4, &var_170)
int64_t* rbx = var_170
void* const rax_12

if (rbx != 0)
    int32_t rax_5 = *(rbx + 0xc)
    
    if (rax_5 s>= data_143e1d9b4)
        rax_12 = nullptr
    else
        int16_t temp1_1
        int32_t temp2_1
        temp1_1:temp2_1 = sx.q(rax_5)
        uint32_t rdx_1 = zx.d(temp1_1)
        int32_t rax_7 = temp2_1 + rdx_1
        rax_12 =
            *(data_143e1d9a0 + (sx.q(rax_7 s>> 0x10) << 3)) + sx.q(zx.d(rax_7.w) - rdx_1) * 0x18

void* result

if (rbx == 0 || ((*(rax_12 + 8) u>> 0x1d).b & 1) != 0)
    void* rcx_9 = *(arg2 + 0x30)
    
    if (rcx_9 == 0)
        void var_b8
        int64_t* rax_65 = _vfprintf_p_l(&var_b8, u"Accessed None reading a Class", u"ScriptCore")
        int32_t var_108 = 3
        int64_t var_100_1 = *rax_65
        int64_t* rcx_43 = rax_65[1]
        
        if (rcx_43 != 0)
            rcx_43[1].d += 1
        
        int32_t var_f0_1 = rax_65[2].d
        int64_t* var_b0
        
        if (var_b0 != 0)
            var_b0[1].d -= 1
            
            if (var_b0[1].d == 1)
                (**var_b0)(var_b0)
                int32_t rax_69 = *(var_b0 + 0xc)
                *(var_b0 + 0xc) -= 1
                
                if (rax_69 == 1)
                    (*(*var_b0 + 8))(var_b0, 1)
        
        sub_140d30680(arg1, arg2, &var_108)
        
        if (rcx_43 != 0)
            rcx_43[1].d -= 1
            
            if (rcx_43[1].d == 1)
                (**rcx_43)(rcx_43)
                int32_t rbx_2 = *(rcx_43 + 0xc)
                *(rcx_43 + 0xc) -= 1
                
                if (rbx_2 == 1)
                    (*(*rcx_43 + 8))(rcx_43, zx.q(rbx_2))
    else
        int64_t var_138
        sub_140b63b70(rcx_9 + 0x28, &var_138)
        void var_90
        int64_t* rax_20 = sub_140aae2f0(&var_90, &var_138)
        void var_d0
        char* var_a0
        char** rax_22 = sub_140a96390(&var_a0, 
            _vfprintf_p_l(&var_d0, Accessed None trying to read Class from property {0}", 
            ScriptCore"))
        int64_t rcx_14 = *rax_20
        int64_t* rcx_15 = rax_20[1]
        int32_t var_78_1 = 4
        
        if (rcx_15 != 0)
            rcx_15[1].d += 1
        
        int32_t rcx_16 = rax_20[2].d
        char var_50_1 = 1
        int32_t* var_168 = nullptr
        int32_t var_160_1 = 1
        sub_1405a4b40(&var_168, 1, 0)
        int32_t* rcx_18 = var_168
        *rcx_18 = var_78_1
        int64_t var_70
        *(rcx_18 + 8) = var_70
        *(rcx_18 + 8) = var_70
        rcx_18[2] = var_70.d
        *(rcx_18 + 8) = var_70
        rcx_18[0xa].b = 0
        
        if (var_50_1 != 0)
            *(rcx_18 + 0x10) = rcx_14
            *(rcx_18 + 0x18) = rcx_15
            
            if (rcx_15 != 0)
                rcx_15[1].d += 1
            
            rcx_18[8] = rcx_16
            rcx_18[0xa].b = 1
        
        char* var_148 = *rax_22
        void* rax_30 = rax_22[1]
        void* var_140_1 = rax_30
        
        if (rax_30 != 0)
            *(rax_30 + 8) += 1
        
        void var_e8
        int64_t* rax_31 = sub_140aac870(&var_e8, &var_148, &var_168)
        int64_t* rdi_1 = rax_31[1]
        int64_t rcx_20 = *rax_31
        
        if (rdi_1 != 0)
            rdi_1[1].d += 1
        
        int32_t r12_1 = rax_31[2].d
        int64_t* var_e0
        
        if (var_e0 != 0)
            var_e0[1].d -= 1
            
            if (var_e0[1].d == 1)
                (**var_e0)(var_e0)
                int32_t rax_34 = *(var_e0 + 0xc)
                *(var_e0 + 0xc) -= 1
                
                if (rax_34 == 1)
                    (*(*var_e0 + 8))(var_e0, 1)
        
        sub_140596f50(&var_168)
        
        if (var_50_1 != 0)
            char var_50_2 = 0
            
            if (rcx_15 != 0)
                rcx_15[1].d -= 1
                
                if (rcx_15[1].d == 1)
                    (**rcx_15)(rcx_15)
                    int32_t rax_38 = *(rcx_15 + 0xc)
                    *(rcx_15 + 0xc) -= 1
                    
                    if (rax_38 == 1)
                        (*(*rcx_15 + 8))(rcx_15, 1)
        
        int64_t* r14_3 = rax_22[1]
        
        if (r14_3 != 0)
            r14_3[1].d -= 1
            
            if (r14_3[1].d == 1)
                (**r14_3)(r14_3)
                int32_t rax_42 = *(r14_3 + 0xc)
                *(r14_3 + 0xc) -= 1
                
                if (rax_42 == 1)
                    (*(*r14_3 + 8))(r14_3, 1)
        
        int64_t* r14_4 = rax_20[1]
        
        if (r14_4 != 0)
            r14_4[1].d -= 1
            
            if (r14_4[1].d == 1)
                (**r14_4)(r14_4)
                int32_t rax_46 = *(r14_4 + 0xc)
                *(r14_4 + 0xc) -= 1
                
                if (rax_46 == 1)
                    (*(*r14_4 + 8))(r14_4, 1)
        
        int64_t var_120_1 = rcx_20
        int32_t var_128 = 3
        
        if (rdi_1 != 0)
            rdi_1[1].d += 1
        
        int32_t var_110_1 = r12_1
        
        if (rdi_1 != 0)
            rdi_1[1].d -= 1
            
            if (rdi_1[1].d == 1)
                (**rdi_1)(rdi_1)
                int32_t rax_51 = *(rdi_1 + 0xc)
                *(rdi_1 + 0xc) -= 1
                
                if (rax_51 == 1)
                    (*(*rdi_1 + 8))(rdi_1, 1)
        
        int64_t* var_c8
        
        if (var_c8 != 0)
            var_c8[1].d -= 1
            
            if (var_c8[1].d == 1)
                (**var_c8)(var_c8)
                int32_t rax_55 = *(var_c8 + 0xc)
                *(var_c8 + 0xc) -= 1
                
                if (rax_55 == 1)
                    (*(*var_c8 + 8))(var_c8, 1)
        
        int64_t rcx_34 = var_138
        
        if (rcx_34 != 0)
            sub_140a74f90(rcx_34)
        
        sub_140d30680(arg1, arg2, &var_128)
        
        if (rdi_1 != 0)
            rdi_1[1].d -= 1
            
            if (rdi_1[1].d == 1)
                (**rdi_1)(rdi_1)
                int32_t rbx_1 = *(rdi_1 + 0xc)
                *(rdi_1 + 0xc) -= 1
                
                if (rbx_1 == 1)
                    (*(*rdi_1 + 8))(rdi_1, zx.q(rbx_1))
        
        r14 = arg3
    
    int32_t* rax_60 = *(arg2 + 0x20)
    uint64_t r9_2 = zx.q(*rax_60)
    *(arg2 + 0x20) = &rax_60[1]
    int64_t* r8_4 = *(rax_60 + 4)
    *(arg2 + 0x20) = &rax_60[3]
    
    if (r8_4 == 0 || ((zx.q(*(r8_4[1] + 0x10)) u>> 0xf).b & 1) == 0)
        r8_4 = nullptr
    
    *(arg2 + 0x38) = 0
    result = &rax_60[3] + r9_2
    *(arg2 + 0x20) = result
    *(arg2 + 0x30) = 0
    
    if (r14 != 0 && r8_4 != 0)
        if ((r8_4[8] & 0x1000000200) != 0x1000000200)
            result = (*(*r8_4 + 0xe0))(r8_4, r14)
        else
            result = memset(r14, 0, sx.q(*(r8_4 + 0x3c)))
else
    int64_t r9 = rbx[0x23]
    
    if (r9 == 0)
        (*(*rbx + 0x390))(rbx)
        r9 = rbx[0x23]
    
    char* rax_17 = *(arg2 + 0x20) + 0xc
    *(arg2 + 0x20) = rax_17
    uint32_t rcx_7 = zx.d(*rax_17)
    *(arg2 + 0x20) = &rax_17[1]
    result = (&data_143e1cd60)[zx.q(rcx_7)](r9, arg2, r14, r9, arg3)

__security_check_cookie(rax_1 ^ &var_198)
return result
