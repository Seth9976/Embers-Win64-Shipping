// 函数: sub_140db8be0
// 地址: 0x140db8be0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

char* rax = sub_140a752e0()
int64_t* rdi = *(rax + 0x30)

if (rdi != 0)
    rdi[1].d += 1

int64_t* rax_1 = sub_140903440(*(rax + 0x28))
int64_t* var_60
sub_140a7c300(sub_140a752e0(), &var_60, rax_1)

if (rdi != 0)
    rdi[1].d -= 1
    
    if (rdi[1].d == 1)
        (**rdi)(rdi)
        int32_t rbx_1 = *(rdi + 0xc)
        *(rdi + 0xc) -= 1
        
        if (rbx_1 == 1)
            (*(*rdi + 8))(rdi, zx.q(rbx_1))

int64_t* rbx_2 = arg1
int64_t* rdi_1 = &rbx_2[7]
int64_t* arg_18 = rdi_1
sub_140dbb9b0(rdi_1, 0)
void* rsi = &rbx_2[9]
void* arg_20 = rsi
sub_140dbb9b0(rsi, 0)
void* rcx_6 = *rbx_2
int32_t i = 0
int32_t i_2 = 0
int32_t i_4

if (*(rcx_6 + 0x30) s> 0)
    int64_t r8_1 = 0
    int64_t rdx_2 = 2
    int64_t r9_1 = 0x20
    int64_t var_80_1 = 0
    int64_t var_88_1 = 2
    int64_t var_78_1 = 0x20
    
    do
        if (rdx_2 s>= 0 && i + 2 s< rbx_2[6].d)
            void* rcx_7 = &rbx_2[1]
            void* rax_7 = *(rcx_7 + 0x20)
            void* r13_2 = *(rcx_6 + 0x28) + r8_1
            
            if (rax_7 != 0)
                rcx_7 = rax_7
            
            int64_t* r15_1 = *(rcx_7 + r9_1 + 8)
            int64_t r12_1 = *(rcx_7 + r9_1)
            
            if (r15_1 != 0)
                r15_1[1].d += 1
            
            if (*(r13_2 + 0x30) s<= 1)
            label_140db8f3b:
                
                if (rsi != 0)
                    char* j = *(r13_2 + 0x18)
                    
                    for (void* r14_6 = &j[sx.q(*(r13_2 + 0x20)) << 4]; j != r14_6; j = &j[0x10])
                        char rax_12 = *j
                        
                        if (rax_12 == 2)
                        label_140db8f85:
                            int64_t rdi_3 = sx.q(*(rsi + 8))
                            int32_t rax_13 = (rdi_3 + 1).d
                            *(rsi + 8) = rax_13
                            
                            if (rax_13 s> *(rsi + 0xc))
                                sub_1405c4e40(rsi)
                            
                            int128_t* rax_16 = (rdi_3 << 5) + *rsi
                            
                            if (r15_1 != 0)
                                r15_1[1].d += 1
                            
                            *rax_16 = *j
                            rax_16[1].q = r12_1
                            *(rax_16 + 0x18) = r15_1
                        else
                            char r8_4 = j[8]
                            
                            if (r8_4 == 2)
                                goto label_140db8f85
                            
                            int32_t rcx_22 = *(j + 4)
                            int32_t temp5_1 = *(j + 0xc)
                            
                            if (rcx_22 s<= temp5_1)
                                if (rcx_22 != temp5_1)
                                    goto label_140db8f85
                                
                                if (rax_12 != 0 && r8_4 != 0)
                                    goto label_140db8f85
            else
                int64_t* var_70 = nullptr
                r9_1.b = 1
                int32_t j_4 = 0
                sub_140a2ccb0(r13_2 + 0x28, &var_70, U";", r9_1.b)
                int64_t* rdi_2 = var_70
                int64_t j_5 = sx.q(j_4)
                void* r14_3 = &rdi_2[j_5 * 2]
                
                if (rdi_2 != r14_3)
                    while (true)
                        int64_t* rbx_3 = var_60
                        void* rsi_3 = &rbx_3[sx.q(i_4) * 2]
                        
                        if (rbx_3 != rsi_3)
                            while (true)
                                int16_t* rdx_4
                                
                                if (rdi_2[1].d == 0)
                                    rdx_4 = &data_142d40450
                                else
                                    rdx_4 = *rdi_2
                                
                                int16_t* const rcx_9
                                
                                if (rbx_3[1].d == 0)
                                    rcx_9 = &data_142d40450
                                else
                                    rcx_9 = *rbx_3
                                
                                if (sub_140a54510(rcx_9, rdx_4) == 0)
                                    int32_t j_3 = j_4
                                    int64_t* rbx_5 = var_70
                                    
                                    if (j_3 != 0)
                                        int32_t j_1
                                        
                                        do
                                            int64_t rcx_20 = *rbx_5
                                            
                                            if (rcx_20 != 0)
                                                sub_140a74f90(rcx_20)
                                            
                                            rbx_5 = &rbx_5[2]
                                            j_1 = j_3
                                            j_3 -= 1
                                        while (j_1 != 1)
                                        rbx_5 = var_70
                                    
                                    if (rbx_5 != 0)
                                        sub_140a74f90(rbx_5)
                                    
                                    rsi = arg_18
                                    break
                                
                                rbx_3 = &rbx_3[2]
                                
                                if (rbx_3 == rsi_3)
                                    goto label_140db8dae
                            
                            break
                        
                    label_140db8dae:
                        rdi_2 = &rdi_2[2]
                        
                        if (rdi_2 == r14_3)
                            j_5 = zx.q(j_4)
                            rdi_2 = var_70
                            goto label_140db8dbe
                    
                    goto label_140db8f3b
                
            label_140db8dbe:
                
                if (j_5.d != 0)
                    int32_t j_2
                    
                    do
                        int64_t rcx_10 = *rdi_2
                        
                        if (rcx_10 != 0)
                            sub_140a74f90(rcx_10)
                        
                        rdi_2 = &rdi_2[2]
                        j_2 = j_5.d
                        j_5 = zx.q(j_5.d - 1)
                    while (j_2 != 1)
                    rdi_2 = var_70
                
                if (rdi_2 != 0)
                    sub_140a74f90(rdi_2)
            
            if (r15_1 != 0)
                r15_1[1].d -= 1
                
                if (r15_1[1].d == 1)
                    (**r15_1)(r15_1)
                    int32_t temp3_1 = *(r15_1 + 0xc)
                    *(r15_1 + 0xc) -= 1
                    
                    if (temp3_1 == 1)
                        (*(*r15_1 + 8))(r15_1, 1)
            
            rsi = arg_20
            rdi_1 = arg_18
        
        i_2 += 1
        var_78_1 += 0x10
        var_88_1 += 1
        rcx_6 = *arg1
        var_80_1 += 0x38
        i = i_2
        rbx_2 = arg1
        rdx_2 = var_88_1
        r8_1 = var_80_1
        r9_1 = var_78_1
    while (i s< *(rcx_6 + 0x30))

int32_t rdx_5 = rdi_1[1].d
int64_t rcx_14 = *rdi_1
arg_18 = sub_140dbe160
sub_140d8fa40(rcx_14, rdx_5, arg1.b, &arg_18)
int32_t rdx_6 = *(rsi + 8)
int64_t rcx_15 = *rsi
arg_20 = sub_140dbe160
sub_140d8fa40(rcx_15, rdx_6, arg1.b, &arg_20)
sub_140d97020(&i_2, rdi_1)
int64_t result = sub_140d97020(&i_2, rsi)
int32_t i_3 = i_4
int64_t* rbx_4 = var_60

if (i_3 != 0)
    int32_t i_1
    
    do
        int64_t rcx_18 = *rbx_4
        
        if (rcx_18 != 0)
            result = sub_140a74f90(rcx_18)
        
        rbx_4 = &rbx_4[2]
        i_1 = i_3
        i_3 -= 1
    while (i_1 != 1)
    rbx_4 = var_60

if (rbx_4 == 0)
    return result

return sub_140a74f90(rbx_4)
