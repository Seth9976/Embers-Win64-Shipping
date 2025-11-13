// 函数: sub_140ec6660
// 地址: 0x140ec6660
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_1d8
int64_t rax_1 = __security_cookie ^ &var_1d8
char var_198 = 0
int64_t* rsi = *(arg1 + 0x3b0)
void* rdi = *(arg1 + 0x3a8)

if (rsi != 0)
    rsi[1].d += 1
    
    if (rsi != 0)
        rsi[1].d += 1
        
        if (rsi != 0)
            rsi[1].d -= 1
            
            if (rsi[1].d == 1)
                (**rsi)(rsi)
                int32_t temp1_1 = *(rsi + 0xc)
                *(rsi + 0xc) -= 1
                
                if (temp1_1 == 1)
                    (*(*rsi + 8))(rsi, 1)

void* rax_4 = *(arg1 + 0x3a8)
int64_t* r12 = *(rax_4 + 0x78)
int64_t* rdx = *(rax_4 + 0x70)

if (r12 != 0)
    r12[1].d += 1

int64_t* rbx = *(arg1 + 0x3a0)
void* r14 = nullptr

if (rbx != 0)
    int32_t rax_5 = rbx[1].d
    
    if (rax_5 == 0)
        rbx = nullptr
    else
        rbx[1].d = rax_5 + 1
        r14 = *(arg1 + 0x398)

void* const rbp = *(r14 + 0x3a0)
int64_t* r14_1 = *(r14 + 0x3a8)

if (r14_1 != 0)
    r14_1[1].d += 1
    
    if (r14_1 != 0)
        r14_1[1].d += 1
        
        if (r14_1 != 0)
            r14_1[1].d -= 1
            
            if (r14_1[1].d == 1)
                (**r14_1)(r14_1)
                int32_t temp5_1 = *(r14_1 + 0xc)
                *(r14_1 + 0xc) -= 1
                
                if (temp5_1 == 1)
                    (*(*r14_1 + 8))(r14_1, 1)

if (rbx != 0)
    rbx[1].d -= 1
    
    if (rbx[1].d == 1)
        (**rbx)(rbx)
        int32_t temp3_1 = *(rbx + 0xc)
        *(rbx + 0xc) -= 1
        
        if (temp3_1 == 1)
            (*(*rbx + 8))(rbx, 1)

int64_t r15

if (*(rbp + 0x88) == 0)
    r15.b = 0
else if (*(rdi + 0x148) == 0)
    r15.b = 1
else if (*(rdi + 0x20) == 0)
    r15.b = 0
else
    int64_t* rcx_6 = *(rdi + 0x18)
    
    if (rcx_6 == 0)
        r15.b = 0
    else if ((*(*rcx_6 + 0x28))(rcx_6) == 0)
        r15.b = 0
    else
        r15.b = 1

int64_t* var_1b0

if (arg2 == 0 && r15.b != 0)
    if (*(rdi + 0x14b) == 0)
        sub_140e5ecb0(data_143e29f28)
    else
        int64_t* rcx_7 = *(arg1 + 0x18)
        int64_t* rdx_1 = nullptr
        
        if (rcx_7 != 0)
            int32_t rax_13 = rcx_7[1].d
            
            if (rax_13 != 0)
                rcx_7[1].d = rax_13 + 1
                rax_13.b = 1
            
            if (rax_13.b == 0)
                rcx_7 = nullptr
            
            if (rcx_7 != 0)
                rdx_1 = *(arg1 + 0x10)
        
        var_1b0 = rdx_1
        arg3 = sub_140e5ed40(data_143e29f28, &var_1b0, arg3)
        
        if (rcx_7 != 0)
            rcx_7[1].d -= 1
            
            if (rcx_7[1].d == 1)
                (**rcx_7)(rcx_7)
                int32_t temp8_1 = *(rcx_7 + 0xc)
                *(rcx_7 + 0xc) -= 1
                
                if (temp8_1 == 1)
                    (*(*rcx_7 + 8))(rcx_7, 1)

int64_t* r8 = rdx
char rax_17
int64_t* rbx_2

if (r8 == 0)
    rbx_2 = rdx
    rax_17 = var_198
    rbp.b = 0
else
    void* rax_16 = *(arg1 + 0x3a8)
    rbx_2 = *(rax_16 + 0x68)
    
    if (rbx_2 != 0)
        rbx_2[1].d += 1
    
    rax_17 = 1
    
    if (*(rax_16 + 0x60) == 0)
        rbp.b = 0
    else
        rbp = 1

if ((rax_17 & 1) != 0 && rbx_2 != 0)
    rbx_2[1].d -= 1
    
    if (rbx_2[1].d == 1)
        (**rbx_2)(rbx_2)
        int32_t temp9_1 = *(rbx_2 + 0xc)
        *(rbx_2 + 0xc) -= 1
        
        if (temp9_1 == 1)
            (*(*rbx_2 + 8))(rbx_2, 1)
        
        r8 = rdx

if (rbp.b == 0)
    arg3 = sub_140e62950(rdi + 0x18)
else
    void* rax_20 = *(arg1 + 0x3a8)
    void* rcx_15 = *(rax_20 + 0x68)
    int64_t* rdx_3 = *(rax_20 + 0x60)
    
    if (rcx_15 != 0)
        *(rcx_15 + 8) += 1
    
    var_1b0 = rdx_3
    void* var_1a8_2 = rcx_15
    (*(*r8 + 0x10))(r8, &var_1b0)

if (r15.b == 0)
    if (*(rdi + 0x120) == 0)
    label_140ec6945:
        int64_t* rcx_19
        
        if (*(rdi + 0x130) != 0)
            rcx_19 = *(rdi + 0x128)
        
        if (*(rdi + 0x130) != 0 && rcx_19 != 0)
            if ((*(*rcx_19 + 0x28))(rcx_19) != 0 || *(rdi + 0x138) != 0)
                goto label_140ec696b
        else if (*(rdi + 0x138) != 0)
            goto label_140ec696b
    else
        int64_t* rcx_18 = *(rdi + 0x118)
        
        if (rcx_18 == 0)
            goto label_140ec6945
        
        if ((*(*rcx_18 + 0x28))(rcx_18) == 0)
            goto label_140ec6945
        
    label_140ec696b:
        int64_t* rdi_1 = *(arg1 + 0x3e8)
        void* const rbp_1
        
        if (rdi_1 == 0)
            rbp_1 = nullptr
        else
            int32_t rax_26 = rdi_1[1].d
            
            if (rax_26 == 0)
                rbp_1 = nullptr
                rdi_1 = nullptr
            else
                rdi_1[1].d = rax_26 + 1
                rbp_1 = nullptr
        
        if (rdi_1 != 0)
            int64_t* r15_1 = *(arg1 + 0x3e0)
            
            if (r15_1 != 0 && sub_140f619a0(r15_1) != 0)
                void var_190
                sub_140d947e0(&var_190)
                int64_t* rbx_3 = r15_1[2]
                int64_t* rcx_22 = nullptr
                
                if (rbx_3 != 0)
                    int32_t rax_29 = rbx_3[1].d
                    
                    if (rax_29 != 0)
                        rbx_3[1].d = rax_29 + 1
                        rax_29.b = 1
                    
                    if (rax_29.b == 0)
                        rbx_3 = nullptr
                    
                    if (rbx_3 != 0)
                        rcx_22 = r15_1[1]
                
                var_1b0 = rcx_22
                int64_t* var_1a8_3 = rbx_3
                
                if (rbx_3 != 0)
                    rbx_3[1].d += 1
                
                sub_140e649d0(data_143e29f28, &var_1b0, &var_190, data_1439ae51c, arg3)
                
                if (rbx_3 != 0)
                    rbx_3[1].d -= 1
                    
                    if (rbx_3[1].d == 1)
                        (**rbx_3)(rbx_3)
                        int32_t temp19_1 = *(rbx_3 + 0xc)
                        *(rbx_3 + 0xc) -= 1
                        
                        if (temp19_1 == 1)
                            (*(*rbx_3 + 8))(rbx_3, 1)
                
                if (sub_140db3500(&var_190) != 0
                        && sub_140e6b870(data_143e29f28, sub_140db22a0(&var_190, &var_1b0)) == 0)
                    int64_t* rbx_5 = *(arg1 + 0x3a0)
                    void* rcx_29 = nullptr
                    
                    if (rbx_5 != 0)
                        int32_t rax_35 = rbx_5[1].d
                        
                        if (rax_35 != 0)
                            rbx_5[1].d = rax_35 + 1
                            rax_35.b = 1
                        
                        if (rax_35.b == 0)
                            rbx_5 = nullptr
                        
                        if (rbx_5 != 0)
                            rcx_29 = *(arg1 + 0x398)
                    
                    sub_140f2d7d0(rcx_29)
                    
                    if (rbx_5 != 0)
                        rbx_5[1].d -= 1
                        
                        if (rbx_5[1].d == 1)
                            (**rbx_5)(rbx_5)
                            int32_t temp23_1 = *(rbx_5 + 0xc)
                            *(rbx_5 + 0xc) -= 1
                            
                            if (temp23_1 == 1)
                                (*(*rbx_5 + 8))(rbx_5, 1)
                    
                    int64_t r8_2
                    r8_2.b = 1
                    (*(*r15_1 + 0x248))(r15_1, 1, r8_2, 0, arg2)
                    var_1b0 = r15_1
                    int64_t* var_1a8_4 = rdi_1
                    
                    if (rdi_1 != 0)
                        rdi_1[1].d += 1
                    
                    int64_t* rbx_6 = *(arg1 + 0x3a0)
                    
                    if (rbx_6 != 0)
                        int32_t rax_39 = rbx_6[1].d
                        
                        if (rax_39 != 0)
                            rbx_6[1].d = rax_39 + 1
                            rax_39.b = 1
                        
                        if (rax_39.b == 0)
                            rbx_6 = nullptr
                        
                        if (rbx_6 != 0)
                            rbp_1 = *(arg1 + 0x398)
                    
                    sub_140eda6e0(rbp_1, &var_1b0)
                    
                    if (rbx_6 != 0)
                        rbx_6[1].d -= 1
                        
                        if (rbx_6[1].d == 1)
                            (**rbx_6)(rbx_6)
                            int32_t temp25_1 = *(rbx_6 + 0xc)
                            *(rbx_6 + 0xc) -= 1
                            
                            if (temp25_1 == 1)
                                (*(*rbx_6 + 8))(rbx_6, 1)
                
                void var_40
                sub_140596d80(&var_40)
                int64_t* var_48
                
                if (var_48 != 0)
                    var_48[1].d -= 1
                    
                    if (var_48[1].d == 1)
                        (**var_48)(var_48)
                        int32_t temp21_1 = *(var_48 + 0xc)
                        *(var_48 + 0xc) -= 1
                        
                        if (temp21_1 == 1)
                            (*(*var_48 + 8))(var_48, 1)
                
                void var_188
                sub_140d94d20(&var_188)
            
            if (rdi_1 != 0)
                rdi_1[1].d -= 1
                
                if (rdi_1[1].d == 1)
                    (**rdi_1)(rdi_1)
                    int32_t temp17_1 = *(rdi_1 + 0xc)
                    *(rdi_1 + 0xc) -= 1
                    
                    if (temp17_1 == 1)
                        (*(*rdi_1 + 8))(rdi_1, 1)

int64_t* result = sub_140eae460(arg1)

if (r14_1 != 0)
    r14_1[1].d -= 1
    
    if (r14_1[1].d == 1)
        result = (**r14_1)(r14_1)
        int32_t temp12_1 = *(r14_1 + 0xc)
        *(r14_1 + 0xc) -= 1
        
        if (temp12_1 == 1)
            result = (*(*r14_1 + 8))(r14_1, 1)

if (r12 != 0)
    r12[1].d -= 1
    
    if (r12[1].d == 1)
        result = (**r12)(r12)
        int32_t temp14_1 = *(r12 + 0xc)
        *(r12 + 0xc) -= 1
        
        if (temp14_1 == 1)
            result = (*(*r12 + 8))(r12, 1)

if (rsi != 0)
    rsi[1].d -= 1
    
    if (rsi[1].d == 1)
        result = (**rsi)(rsi)
        int32_t temp15_1 = *(rsi + 0xc)
        *(rsi + 0xc) -= 1
        
        if (temp15_1 == 1)
            result = (*(*rsi + 8))(rsi, 1)

__security_check_cookie(rax_1 ^ &var_1d8)
return result
