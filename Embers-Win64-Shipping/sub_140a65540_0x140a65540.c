// 函数: sub_140a65540
// 地址: 0x140a65540
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t* rbp = arg2
void* var_58 = nullptr
int32_t i_5 = 0
int64_t* rsi = arg1
sub_140a5dcb0(arg1, &var_58)
int64_t* var_68 = nullptr
int32_t i_4 = 0
sub_140a5dcb0(rbp, &var_68)
void* r15 = var_58
int32_t i_3 = i_5
sub_140688010(r15, i_3, arg1.b)
int64_t* r12 = var_68
sub_140688010(r12, i_4, arg1.b)
int32_t rdi = 0

if (i_3 s> 0)
    int32_t* rbx_1 = r15 + 8
    rbp = r12 - r15
    int16_t* const rsi_1 = &data_142d40450
    
    do
        if (rdi s>= i_4)
            goto label_140a65806
        
        int16_t* rdx_4
        
        if (*(rbx_1 + rbp) == 0)
            rdx_4 = &data_142d40450
        else
            rdx_4 = *(rbx_1 + rbp - 8)
        
        int16_t* const rcx_3
        
        if (*rbx_1 == 0)
            rcx_3 = &data_142d40450
        else
            rcx_3 = *(rbx_1 - 8)
        
        if (sub_140a54510(rcx_3, rdx_4) != 0)
            int64_t rax_3 = sx.q(rdi) * 2
            int16_t* rdx_5
            
            if (r12[rax_3 + 1].d == 0)
                rdx_5 = &data_142d40450
            else
                rdx_5 = r12[rax_3]
            
            if (*(r15 + (rax_3 << 3) + 8) != 0)
                rsi_1 = *(r15 + (rax_3 << 3))
            
            rbp.b = sub_140a54510(rsi_1, rdx_5) s< 0
            goto label_140a65809
        
        rdi += 1
        rbx_1 = &rbx_1[4]
    while (rdi s< i_3)
    
    rsi = arg1
    rbp = arg2

if (i_4 s<= i_3)
    int32_t r12_1 = 0
    
    if (i_3 s<= 0)
    label_140a65806:
        rbp.b = 0
    else
        while (true)
            void* rbx_4 = (sx.q(r12_1) << 4) + r15
            int32_t arg_18
            sub_140926e00(rsi, &arg_18, rbx_4)
            int64_t rax_5 = sx.q(arg_18)
            void* const rcx_6
            
            if (rax_5.d == 0xffffffff)
                rcx_6 = nullptr
            else
                rcx_6 = *rsi + rax_5 * 0x28
            
            int64_t* r14_1 = rcx_6 + 0x10
            
            if (rcx_6 == 0)
                r14_1 = nullptr
            
            int32_t arg_20
            sub_140926e00(rbp, &arg_20, rbx_4)
            int64_t rax_7 = sx.q(arg_20)
            void* const rcx_8
            
            if (rax_7.d == 0xffffffff)
                rcx_8 = nullptr
            else
                rcx_8 = *rbp + rax_7 * 0x28
            
            int64_t* rdi_1 = rcx_8 + 0x10
            
            if (rcx_8 == 0)
                rdi_1 = nullptr
            
            if (r14_1 != 0 || rdi_1 != 0)
                int32_t rcx_9
                rcx_9.b = rdi_1 == 0
                int32_t rax_9
                rax_9.b = r14_1 == 0
                
                if (rax_9 != rcx_9)
                    rbp.b = rdi_1 == 0
                    break
                
                int64_t* rsi_2 = *r14_1
                
                if (rsi_2 != 0 || *rdi_1 != 0)
                    int64_t* r15_1 = *rdi_1
                    rbp.b = r15_1 != 0
                    rax_9.b = rsi_2 != 0
                    
                    if (rax_9.b != rbp.b)
                        break
                    
                    int32_t rax_11 = (*(*rsi_2 + 0x38))(rsi_2)
                    int32_t rax_12 = (*(*r15_1 + 0x38))(r15_1)
                    int64_t r8_5 = *rsi_2
                    int32_t rax_13
                    
                    if (rax_11 != rax_12)
                        int32_t rax_14 = (*(r8_5 + 0x38))(rsi_2)
                        int64_t rdx_11 = *r15_1
                        rax_13.b = rax_14 s< (*(rdx_11 + 0x38))(r15_1, rdx_11)
                    else
                        rax_13 = (*(r8_5 + 0x48))(rsi_2, r15_1, r8_5)
                    
                    if (rax_13.b != 0)
                        goto label_140a65641
                    
                    int64_t* rsi_3 = *rdi_1
                    int64_t* rdi_2 = *r14_1
                    
                    if ((*(*rdi_2 + 0x38))(rdi_2) != (*(*rsi_3 + 0x38))(rsi_3))
                        goto label_140a65806
                    
                    if ((*(*rdi_2 + 0x40))(rdi_2, rsi_3) == 0)
                        goto label_140a65806
                    
                    r15 = var_58
                    rbp = arg2
                
                rsi = arg1
            
            r12_1 += 1
            
            if (r12_1 s>= i_3)
                goto label_140a65806
else
label_140a65641:
    rbp.b = 1

label_140a65809:
int64_t* r14_2 = var_68
int32_t i_2 = i_4
int64_t* rdi_3 = r14_2

if (i_2 != 0)
    int32_t i
    
    do
        int64_t rbx_8 = *rdi_3
        
        if (rbx_8 != 0)
            int64_t* rcx_17 = data_143ddb3f0
            
            if (rcx_17 == 0)
                sub_140a750a0()
                rcx_17 = data_143ddb3f0
            
            (*(*rcx_17 + 0x30))(rcx_17, rbx_8)
        
        rdi_3 = &rdi_3[2]
        i = i_2
        i_2 -= 1
    while (i != 1)

if (r14_2 != 0)
    int64_t* rcx_18 = data_143ddb3f0
    
    if (rcx_18 == 0)
        sub_140a750a0()
        rcx_18 = data_143ddb3f0
    
    (*(*rcx_18 + 0x30))(rcx_18, r14_2)

void* rsi_4 = var_58
void* rdi_4 = rsi_4

if (i_3 != 0)
    int32_t i_1
    
    do
        int64_t rbx_9 = *rdi_4
        
        if (rbx_9 != 0)
            int64_t* rcx_19 = data_143ddb3f0
            
            if (rcx_19 == 0)
                sub_140a750a0()
                rcx_19 = data_143ddb3f0
            
            (*(*rcx_19 + 0x30))(rcx_19, rbx_9)
        
        rdi_4 += 0x10
        i_1 = i_3
        i_3 -= 1
    while (i_1 != 1)

if (rsi_4 != 0)
    int64_t* rcx_20 = data_143ddb3f0
    
    if (rcx_20 != 0)
        (*(*rcx_20 + 0x30))(rcx_20, rsi_4)
    else
        sub_140a750a0()
        int64_t* rcx_21 = data_143ddb3f0
        int64_t r8_7 = *rcx_21
        (*(r8_7 + 0x30))(rcx_21, rsi_4, r8_7)

return zx.q(rbp.b)
