// 函数: sub_140f67280
// 地址: 0x140f67280
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

if (*(arg1 + 0x888) != 0)
label_140f672d4:
    
    if (*(arg1 + 0x890) != 0)
        int64_t* rdi_1 = *(arg1 + 0x898)
        
        if (rdi_1 != 0)
            int32_t rax_2 = rdi_1[1].d
            
            if (rax_2 s> 0)
                if (rdi_1 != 0)
                    if (rax_2 != 0)
                        rdi_1[1].d = rax_2 + 1
                        rax_2.b = 1
                    
                    if (rax_2.b == 0)
                        rdi_1 = nullptr
                
                int64_t* rcx = nullptr
                
                if (rdi_1 != 0)
                    rcx = *(arg1 + 0x890)
                
                (*(*rcx + 0x38))(rcx)
                
                if (rdi_1 != 0)
                    rdi_1[1].d -= 1
                    
                    if (rdi_1[1].d == 1)
                        (**rdi_1)(rdi_1)
                        int32_t temp6_1 = *(rdi_1 + 0xc)
                        *(rdi_1 + 0xc) -= 1
                        
                        if (temp6_1 == 1)
                            (*(*rdi_1 + 8))(rdi_1, 1)
    
    *(arg1 + 0x888) = 0
    void var_28
    
    if (arg1 + 0x890 != &var_28)
        *(arg1 + 0x890) = 0
        int64_t* rcx_3 = *(arg1 + 0x898)
        *(arg1 + 0x898) = 0
        
        if (rcx_3 != 0)
            int32_t temp1_1 = *(rcx_3 + 0xc)
            *(rcx_3 + 0xc) -= 1
            
            if (temp1_1 == 1)
                (*(*rcx_3 + 8))(rcx_3, 1)
else if (*(arg1 + 0x890) != 0)
    void* rax_1 = *(arg1 + 0x898)
    
    if (rax_1 != 0 && *(rax_1 + 8) s> 0)
        goto label_140f672d4

if (data_143e29f28 != 0)
    int64_t* rcx_4 = data_143e20d18
    int64_t* rax_8 = (*(*rcx_4 + 0xe8))(rcx_4)
    
    if (rax_8 != 0 && *(arg1 + 0x6f0) != 0)
        int64_t* rdi_2 = *(arg1 + 0x700)
        void* rbp_1 = *(arg1 + 0x6f8)
        
        if (rdi_2 != 0)
            rdi_2[1].d += 1
        
        *(rbp_1 + 8) = 0
        *(rbp_1 + 0x58) = 0
        void* var_58 = rbp_1
        
        if (rdi_2 != 0)
            rdi_2[1].d += 1
        
        char rax_10 = (*(*rax_8 + 0x30))(rax_8, &var_58)
        
        if (rdi_2 != 0)
            rdi_2[1].d -= 1
            
            if (rdi_2[1].d == 1)
                int64_t rdx_2 = *rdi_2
                (*rdx_2)(rdi_2, rdx_2)
                int32_t temp8_1 = *(rdi_2 + 0xc)
                *(rdi_2 + 0xc) -= 1
                
                if (temp8_1 == 1)
                    (*(*rdi_2 + 8))(rdi_2, 1)
        
        if (rax_10 != 0)
            void* var_48 = rbp_1
            
            if (rdi_2 != 0)
                rdi_2[1].d += 1
            
            (*(*rax_8 + 0x28))(rax_8, &var_48)
            
            if (rdi_2 != 0)
                rdi_2[1].d -= 1
                
                if (rdi_2[1].d == 1)
                    (**rdi_2)(rdi_2)
                    int32_t temp16_1 = *(rdi_2 + 0xc)
                    *(rdi_2 + 0xc) -= 1
                    
                    if (temp16_1 == 1)
                        (*(*rdi_2 + 8))(rdi_2, 1)
        
        void* var_38 = rbp_1
        
        if (rdi_2 != 0)
            rdi_2[1].d += 1
        
        (*(*rax_8 + 0x18))(rax_8, &var_38)
        
        if (rdi_2 != 0)
            rdi_2[1].d -= 1
            
            if (rdi_2[1].d == 1)
                (**rdi_2)(rdi_2)
                int32_t temp15_1 = *(rdi_2 + 0xc)
                *(rdi_2 + 0xc) -= 1
                
                if (temp15_1 == 1)
                    (*(*rdi_2 + 8))(rdi_2, 1)
        
        if (rdi_2 != 0)
            rdi_2[1].d -= 1
            
            if (rdi_2[1].d == 1)
                (**rdi_2)(rdi_2)
                int32_t temp19_1 = *(rdi_2 + 0xc)
                *(rdi_2 + 0xc) -= 1
                
                if (temp19_1 == 1)
                    (*(*rdi_2 + 8))(rdi_2, 1)

int64_t* rcx_16 = *(arg1 + 0x898)

if (rcx_16 != 0)
    int32_t temp2_1 = *(rcx_16 + 0xc)
    *(rcx_16 + 0xc) -= 1
    
    if (temp2_1 == 1)
        (*(*rcx_16 + 8))(rcx_16, 1)

int64_t* rdi_3 = *(arg1 + 0x880)

if (rdi_3 != 0)
    rdi_3[1].d -= 1
    
    if (rdi_3[1].d == 1)
        (**rdi_3)(rdi_3)
        int32_t temp4_1 = *(rdi_3 + 0xc)
        *(rdi_3 + 0xc) -= 1
        
        if (temp4_1 == 1)
            (*(*rdi_3 + 8))(rdi_3, 1)

int64_t* rsi_5 = *(arg1 + 0x858)

if (rsi_5 != 0)
    rsi_5[1].d -= 1
    
    if (rsi_5[1].d == 1)
        (**rsi_5)(rsi_5)
        int32_t rax_25 = *(rsi_5 + 0xc)
        *(rsi_5 + 0xc) -= 1
        
        if (rax_25 == 1)
            (*(*rsi_5 + 8))(rsi_5, 1)

if (*(arg1 + 0x828) != 0)
    *(arg1 + 0x828) = 0

int64_t* rsi_6 = *(arg1 + 0x810)

if (rsi_6 != 0)
    rsi_6[1].d -= 1
    
    if (rsi_6[1].d == 1)
        (**rsi_6)(rsi_6)
        int32_t rax_29 = *(rsi_6 + 0xc)
        *(rsi_6 + 0xc) -= 1
        
        if (rax_29 == 1)
            (*(*rsi_6 + 8))(rsi_6, 1)

sub_140f89a00(arg1 + 0x7c0)
sub_140f670e0(arg1 + 0x7a8)

if (*(arg1 + 0x788) != 0)
    *(arg1 + 0x788) = 0

if (*(arg1 + 0x77c) != 0)
    *(arg1 + 0x77c) = 0

sub_140d948f0(arg1 + 0x758)
int64_t* rsi_7 = *(arg1 + 0x750)

if (rsi_7 != 0)
    rsi_7[1].d -= 1
    
    if (rsi_7[1].d == 1)
        (**rsi_7)(rsi_7)
        int32_t temp13_1 = *(rsi_7 + 0xc)
        *(rsi_7 + 0xc) -= 1
        
        if (temp13_1 == 1)
            (*(*rsi_7 + 8))(rsi_7, 1)

int64_t* rsi_8 = *(arg1 + 0x740)

if (rsi_8 != 0)
    rsi_8[1].d -= 1
    
    if (rsi_8[1].d == 1)
        (**rsi_8)(rsi_8)
        int32_t temp18_1 = *(rsi_8 + 0xc)
        *(rsi_8 + 0xc) -= 1
        
        if (temp18_1 == 1)
            (*(*rsi_8 + 8))(rsi_8, 1)

int64_t* rsi_9 = *(arg1 + 0x730)

if (rsi_9 != 0)
    rsi_9[1].d -= 1
    
    if (rsi_9[1].d == 1)
        (**rsi_9)(rsi_9)
        int32_t temp21_1 = *(rsi_9 + 0xc)
        *(rsi_9 + 0xc) -= 1
        
        if (temp21_1 == 1)
            (*(*rsi_9 + 8))(rsi_9, 1)

int64_t* rsi_10 = *(arg1 + 0x720)

if (rsi_10 != 0)
    rsi_10[1].d -= 1
    
    if (rsi_10[1].d == 1)
        (**rsi_10)(rsi_10)
        int32_t temp23_1 = *(rsi_10 + 0xc)
        *(rsi_10 + 0xc) -= 1
        
        if (temp23_1 == 1)
            (*(*rsi_10 + 8))(rsi_10, 1)

int64_t* rsi_11 = *(arg1 + 0x710)

if (rsi_11 != 0)
    rsi_11[1].d -= 1
    
    if (rsi_11[1].d == 1)
        (**rsi_11)(rsi_11)
        int32_t temp25_1 = *(rsi_11 + 0xc)
        *(rsi_11 + 0xc) -= 1
        
        if (temp25_1 == 1)
            (*(*rsi_11 + 8))(rsi_11, 1)

int64_t* rsi_12 = *(arg1 + 0x700)

if (rsi_12 != 0)
    rsi_12[1].d -= 1
    
    if (rsi_12[1].d == 1)
        (**rsi_12)(rsi_12)
        int32_t temp27_1 = *(rsi_12 + 0xc)
        *(rsi_12 + 0xc) -= 1
        
        if (temp27_1 == 1)
            (*(*rsi_12 + 8))(rsi_12, 1)

int64_t* rsi_13 = *(arg1 + 0x6e8)

if (rsi_13 != 0)
    rsi_13[1].d -= 1
    
    if (rsi_13[1].d == 1)
        (**rsi_13)(rsi_13)
        int32_t temp28_1 = *(rsi_13 + 0xc)
        *(rsi_13 + 0xc) -= 1
        
        if (temp28_1 == 1)
            (*(*rsi_13 + 8))(rsi_13, 1)

sub_140745b20(arg1 + 0x6d0)
int64_t rcx_41 = *(arg1 + 0x6b8)

if (rcx_41 != 0)
    sub_140a74f90(rcx_41)

sub_140745b20(arg1 + 0x6a8)
sub_140745b20(arg1 + 0x690)
sub_140745b20(arg1 + 0x678)
sub_140745b20(arg1 + 0x650)
sub_140745b20(arg1 + 0x638)
sub_140745b20(arg1 + 0x620)
int64_t* rsi_14 = *(arg1 + 0x600)

if (rsi_14 != 0)
    rsi_14[1].d -= 1
    
    if (rsi_14[1].d == 1)
        (**rsi_14)(rsi_14)
        int32_t rax_47 = *(rsi_14 + 0xc)
        *(rsi_14 + 0xc) -= 1
        
        if (rax_47 == 1)
            (*(*rsi_14 + 8))(rsi_14, 1)

int64_t* rsi_15 = *(arg1 + 0x5e8)

if (rsi_15 != 0)
    rsi_15[1].d -= 1
    
    if (rsi_15[1].d == 1)
        (**rsi_15)(rsi_15)
        int32_t rax_51 = *(rsi_15 + 0xc)
        *(rsi_15 + 0xc) -= 1
        
        if (rax_51 == 1)
            (*(*rsi_15 + 8))(rsi_15, 1)

sub_140745b20(arg1 + 0x5d0)
int64_t* rsi_16 = *(arg1 + 0x5b8)

if (rsi_16 != 0)
    rsi_16[1].d -= 1
    
    if (rsi_16[1].d == 1)
        (**rsi_16)(rsi_16)
        int32_t rax_55 = *(rsi_16 + 0xc)
        *(rsi_16 + 0xc) -= 1
        
        if (rax_55 == 1)
            (*(*rsi_16 + 8))(rsi_16, 1)

sub_140745b20(arg1 + 0x5a0)
int64_t* rsi_17 = *(arg1 + 0x588)

if (rsi_17 != 0)
    rsi_17[1].d -= 1
    
    if (rsi_17[1].d == 1)
        (**rsi_17)(rsi_17)
        int32_t rax_59 = *(rsi_17 + 0xc)
        *(rsi_17 + 0xc) -= 1
        
        if (rax_59 == 1)
            (*(*rsi_17 + 8))(rsi_17, 1)

int64_t* rsi_18 = *(arg1 + 0x568)

if (rsi_18 != 0)
    rsi_18[1].d -= 1
    
    if (rsi_18[1].d == 1)
        (**rsi_18)(rsi_18)
        int32_t rax_63 = *(rsi_18 + 0xc)
        *(rsi_18 + 0xc) -= 1
        
        if (rax_63 == 1)
            (*(*rsi_18 + 8))(rsi_18, 1)

sub_140745b20(arg1 + 0x550)
int64_t* rsi_19 = *(arg1 + 0x538)

if (rsi_19 != 0)
    rsi_19[1].d -= 1
    
    if (rsi_19[1].d == 1)
        (**rsi_19)(rsi_19)
        int32_t rdi_4 = *(rsi_19 + 0xc)
        *(rsi_19 + 0xc) -= 1
        
        if (rdi_4 == 1)
            (*(*rsi_19 + 8))(rsi_19, zx.q(rdi_4))

sub_140de06c0(arg1 + 0x2c8)
sub_140de06c0(arg1 + 0x60)
void* rdi_5 = *(arg1 + 0x58)

if (rdi_5 != 0)
    sub_140f67a30(rdi_5)
    j_sub_140a74f90(rdi_5)

int64_t* rdi_6 = *(arg1 + 0x50)

if (rdi_6 != 0)
    rdi_6[1].d -= 1
    
    if (rdi_6[1].d == 1)
        (**rdi_6)(rdi_6)
        int32_t temp31_1 = *(rdi_6 + 0xc)
        *(rdi_6 + 0xc) -= 1
        
        if (temp31_1 == 1)
            (*(*rdi_6 + 8))(rdi_6, 1)

uint64_t result = sub_140745b20(arg1 + 0x38)
int64_t* rdi_7 = *(arg1 + 0x30)

if (rdi_7 != 0)
    rdi_7[1].d -= 1
    
    if (rdi_7[1].d == 1)
        result = (**rdi_7)(rdi_7)
        int32_t temp33_1 = *(rdi_7 + 0xc)
        *(rdi_7 + 0xc) -= 1
        
        if (temp33_1 == 1)
            result = (*(*rdi_7 + 8))(rdi_7, 1)

int64_t* rdi_8 = *(arg1 + 0x20)

if (rdi_8 != 0)
    rdi_8[1].d -= 1
    
    if (rdi_8[1].d == 1)
        result = (**rdi_8)(rdi_8)
        int32_t temp35_1 = *(rdi_8 + 0xc)
        *(rdi_8 + 0xc) -= 1
        
        if (temp35_1 == 1)
            result = (*(*rdi_8 + 8))(rdi_8, 1)

int64_t* rbx_1 = *(arg1 + 0x10)

if (rbx_1 != 0)
    rbx_1[1].d -= 1
    
    if (rbx_1[1].d == 1)
        result = (**rbx_1)(rbx_1)
        int32_t temp36_1 = *(rbx_1 + 0xc)
        *(rbx_1 + 0xc) -= 1
        
        if (temp36_1 == 1)
            jump(*(*rbx_1 + 8))

return result
