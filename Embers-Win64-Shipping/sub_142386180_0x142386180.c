// 函数: sub_142386180
// 地址: 0x142386180
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

if (*(arg1 + 0x12) != 0 || arg1[0x13] == 0)
    return 

int64_t* rbx_1 = arg1[1]
int64_t* r13_1 = nullptr
int64_t* r14_1 = nullptr

if (rbx_1 != 0)
    int32_t rax_1 = rbx_1[1].d
    
    if (rax_1 != 0)
        rbx_1[1].d = rax_1 + 1
        rax_1.b = 1
    
    if (rax_1.b == 0)
        rbx_1 = nullptr
    
    if (rbx_1 != 0)
        r14_1 = *arg1

int64_t* var_68 = r14_1
int64_t* var_48

if (arg1[2].b != 0 || *(arg1 + 0x11) != 0)
    void* rcx_17 = data_143f59f60
    
    if (rcx_17 != 0)
        var_48 = r14_1
        int64_t* var_40_2 = rbx_1
        
        if (rbx_1 != 0)
            rbx_1[1].d += 1
        
        arg2 = sub_142385de0(rcx_17, &var_48)
    
    if (*(arg1 + 0x11) == 0)
        sub_142394bf0(arg1, arg2)
    
    *(arg1 + 0x12) = 1
    sub_142392400(arg1)
else
    *(arg1 + 0x12) = 1
    sub_142392400(arg1)
    int64_t var_58 = 0
    int32_t var_50_1 = 0
    var_48 = r14_1
    int64_t* var_40_1 = rbx_1
    
    if (rbx_1 != 0)
        rbx_1[1].d += 1
    
    int512_t zmm1 = sub_14238bbe0(&arg1[5], &var_48, &var_58)
    sub_14239b010(arg1)
    
    if (*(arg1 + 0x13) == 0)
        int64_t* i = arg1[0xd]
        
        for (void* r15_1 = &i[sx.q(arg1[0xe].d) * 3]; i != r15_1; i = &i[3])
            var_48 = r14_1
            var_40_1 = rbx_1
            
            if (rbx_1 != 0)
                rbx_1[1].d += 1
            
            zmm1 = sub_142395a80(arg1[0x13], i, &var_48)
    
    sub_140dba5f0(arg1[0x13] + 0xb0, &var_68)
    void** rsi_1 = arg1[0xf]
    void* r14_4 = &rsi_1[sx.q(arg1[0x10].d) * 2]
    
    if (rsi_1 != r14_4)
        int128_t zmm6 = var_68.o
        int64_t* arg_8 = &var_48
        
        do
            var_48.o = zmm6
            
            if (rbx_1 != 0)
                *(rbx_1 + 0xc) += 1
            
            sub_14237cef0(*rsi_1 + 0x88, &arg_8, zmm1)
            
            if (var_40_1 != 0)
                int32_t temp2_1 = *(var_40_1 + 0xc)
                *(var_40_1 + 0xc) -= 1
                
                if (temp2_1 == 1)
                    (*(*var_40_1 + 8))(var_40_1, 1)
            
            rsi_1 = &rsi_1[2]
        while (rsi_1 != r14_4)
    
    sub_14095cd40(&arg1[0xf], 0)
    arg1[0xc] = 0
    arg1[0x13] = 0
    
    if (arg1[0x12].d s> 0)
        int32_t i_3 = arg1[0x12].d
        int64_t rdi_1 = arg1[0x11]
        var_68 = nullptr
        int64_t* var_60_1
        var_60_1.d = i_3
        void** rax
        
        if (i_3 != 0)
            sub_1405a4be0(&var_68, i_3, 0)
            r13_1 = var_68
            int64_t* rcx_11 = r13_1
            int64_t* rdi_2 = rdi_1 - r13_1
            int32_t i_1
            
            do
                *rcx_11 = *(rdi_2 + rcx_11)
                rax = *(rdi_2 + rcx_11 + 8)
                rcx_11[1] = rax
                
                if (rax != 0)
                    *(rax + 0xc) += 1
                
                rcx_11 = &rcx_11[2]
                i_1 = i_3
                i_3 -= 1
            while (i_1 != 1)
            i_3 = var_60_1.d
        
        int64_t* rsi_2 = r13_1
        void* r15_4 = &r13_1[sx.q(i_3) * 2]
        
        if (r13_1 != r15_4)
            do
                int64_t* rdi_3 = rsi_2[1]
                
                if (rdi_3 != 0)
                    rax = zx.q(rdi_3[1].d)
                    
                    if (rax.d != 0)
                        int32_t rax_5 = rax.d + 1
                        rdi_3[1].d = rax_5
                        int64_t* rcx_12 = *rsi_2
                        
                        if (rcx_12 != 0)
                            zmm1 = sub_14239b8a0(rcx_12, zmm1)
                            rax_5 = rdi_3[1].d
                        
                        rdi_3[1].d = rax_5 - 1
                        
                        if (rax_5 == 1)
                            (**rdi_3)(rdi_3)
                            int32_t temp7_1 = *(rdi_3 + 0xc)
                            *(rdi_3 + 0xc) -= 1
                            
                            if (temp7_1 == 1)
                                (*(*rdi_3 + 8))(rdi_3, 1)
                
                rsi_2 = &rsi_2[2]
            while (rsi_2 != r15_4)
        
        if (i_3 != 0)
            void* rdi_4 = &r13_1[1]
            int32_t i_2
            
            do
                int64_t* rcx_15 = *rdi_4
                
                if (rcx_15 != 0)
                    int32_t temp5_1 = *(rcx_15 + 0xc)
                    *(rcx_15 + 0xc) -= 1
                    
                    if (temp5_1 == 1)
                        (*(*rcx_15 + 8))(rcx_15, 1)
                
                rdi_4 += 0x10
                i_2 = i_3
                i_3 -= 1
            while (i_2 != 1)
        
        if (r13_1 != 0)
            sub_140a74f90(r13_1)

if (rbx_1 == 0)
    return 

rbx_1[1].d -= 1

if (rbx_1[1].d != 1)
    return 

(**rbx_1)(rbx_1)
int32_t temp1_1 = *(rbx_1 + 0xc)
*(rbx_1 + 0xc) -= 1

if (temp1_1 == 1)
    (*(*rbx_1 + 8))(rbx_1, 1)
