// 函数: sub_140d4a3c0
// 地址: 0x140d4a3c0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

__chkstk(0x29c0)
void var_29e8
int64_t var_38 = __security_cookie ^ &var_29e8
int32_t rsi = 0
int64_t i_4 = 0x100
int32_t var_29b8 = 0
int32_t r15 = 0
void var_102c
void* rax_2 = &var_102c
int64_t i_6 = 0x100
int64_t i

do
    *(rax_2 - 0xc) = 0
    *(rax_2 - 4) = 0
    rax_2 += 0x10
    i = i_6
    i_6 -= 1
while (i != 1)
int64_t i_5 = 0x100
void var_202c
void* rax_3 = &var_202c
int64_t i_1

do
    *(rax_3 - 0xc) = 0
    *(rax_3 - 4) = 0
    rax_3 += 0x10
    i_1 = i_5
    i_5 -= 1
while (i_1 != 1)
void var_2438
int64_t var_2038
int32_t rax_4 = sub_140d47dd0(&var_2438, &var_2038, 0x100, 1, 0)
int32_t r14 = rax_4
void var_2838
int64_t var_1038
uint64_t i_9 = zx.q(sub_140d45e80(&var_2838, &var_1038, 0x100))
sub_140d6e120(arg1)
int64_t* r12 = &arg1[0xa]
bool result = sub_140d6e120(r12)

if (i_9.d != 0)
    int64_t* rdi_1 = &var_1038
    int64_t* var_29b0_1 = &var_1038
    void* var_2980_1 = &var_2838
    uint64_t i_7 = zx.q(i_9.d)
    uint64_t i_8 = i_9
    uint64_t i_2
    
    do
        int16_t* rdx_2
        
        if (rdi_1[1].d == 0)
            rdx_2 = &data_142d40450
        else
            rdx_2 = *rdi_1
        
        int32_t var_2998
        sub_140b58260(&var_2998, rdx_2, 1)
        int128_t var_2990_1 = zx.o(0)
        int32_t rcx_5
        rcx_5.b = sub_140b5b8a0(var_2998, 0) == 0
        int32_t var_2994
        bool rax_6
        
        if ((var_2994 != 0 | rcx_5.b) == 0)
            rax_6 = false
        else
            sub_140d435a0(&var_2998)
            rax_6 = var_2990_1.q != 0
        
        if (rax_6 == 0)
            sub_140d435a0(&var_2998)
            void* rcx_8 = var_2990_1.q
            int64_t* var_2958
            int64_t* rax_9
            int64_t r14_1
            
            if (rcx_8 == 0)
                r15 |= 2
                void var_2858
                rax_9 = sub_140aae2b0(&var_2858, &var_2998)
                r14_1 = *rax_9
            else
                r15 |= 1
                int64_t* rax_7 = sub_140d44910(rcx_8 + 0x28)
                int64_t* rcx_10 = rax_7[1]
                r14_1 = *rax_7
                int64_t var_2960 = r14_1
                var_2958 = rcx_10
                
                if (rcx_10 != 0)
                    rcx_10[1].d += 1
                
                int32_t var_2950_1 = rax_7[2].d
                rax_9 = &var_2960
            
            int64_t* rdi_2 = rax_9[1]
            
            if (rdi_2 != 0)
                rdi_2[1].d += 1
            
            int32_t r12_1 = rax_9[2].d
            
            if ((r15.b & 2) != 0)
                r15 &= 0xfffffffd
                int64_t* var_2850
                
                if (var_2850 != 0)
                    var_2850[1].d -= 1
                    
                    if (var_2850[1].d == 1)
                        (**var_2850)(var_2850)
                        int32_t rax_12 = *(var_2850 + 0xc)
                        *(var_2850 + 0xc) -= 1
                        
                        if (rax_12 == 1)
                            (*(*var_2850 + 8))(var_2850, 1)
            
            if ((r15.b & 1) != 0)
                r15 &= 0xfffffffe
                
                if (var_2958 != 0)
                    var_2958[1].d -= 1
                    
                    if (var_2958[1].d == 1)
                        (**var_2958)(var_2958)
                        int32_t rax_16 = *(var_2958 + 0xc)
                        *(var_2958 + 0xc) -= 1
                        
                        if (rax_16 == 1)
                            (*(*var_2958 + 8))(var_2958, 1)
            
            int64_t var_2910_1 = r14_1
            
            if (rdi_2 != 0)
                rdi_2[1].d += 1
            
            int32_t var_2900_1 = r12_1
            char var_28f8_1 = 1
            int64_t var_28f0 = 0
            int32_t var_28e8_1 = 0
            int64_t var_2940
            sub_140a96170(&var_2940)
            int64_t* rbx_2 = var_2990_1:8.q
            int64_t rax_18 = var_2998.q
            char var_2928_1 = 0
            int64_t* var_2920 = nullptr
            int32_t var_2918_1 = 0
            int64_t var_29a0_1 = 0
            
            if (rbx_2 != 0)
                rbx_2[1].d += 1
            
            int64_t var_28e0 = rax_18
            int64_t var_28d8_1 = var_2990_1.q
            int64_t* var_28d0_1 = rbx_2
            
            if (rbx_2 != 0)
                rbx_2[1].d += 1
            
            int64_t var_28c8_1 = var_29a0_1
            int64_t var_28b8_1 = r14_1
            int64_t* var_28b0_1 = rdi_2
            
            if (rdi_2 != 0)
                rdi_2[1].d += 1
            
            int64_t var_2888_1 = var_2940
            int32_t var_28a8_1 = r12_1
            char var_28a0_1 = 1
            int64_t var_2898_1 = 0
            int32_t var_2890_1 = 0
            int64_t* var_2938
            int64_t* var_2880_1 = var_2938
            
            if (var_2938 != 0)
                var_2938[1].d += 1
            
            int32_t var_2930
            int32_t var_2878_1 = var_2930
            char var_2870_1 = var_2928_1
            int64_t var_2868 = 0
            int32_t var_2860_1 = 0
            
            if (var_2918_1 != 0)
                int64_t* rcx_19 = var_2920
                
                if (rcx_19 != 0)
                    (*(*rcx_19 + 0x40))(rcx_19, &var_2868)
            
            sub_140d434a0(&var_28e0, 0)
            
            if (rbx_2 != 0)
                rbx_2[1].d -= 1
                
                if (rbx_2[1].d == 1)
                    (**rbx_2)(rbx_2)
                    int32_t temp9_1 = *(rbx_2 + 0xc)
                    *(rbx_2 + 0xc) -= 1
                    
                    if (temp9_1 == 1)
                        (*(*rbx_2 + 8))(rbx_2, 1)
            
            sub_140d431a0(&var_28e0)
            sub_140d430e0(&var_28e0)
            sub_140745b20(&var_2920)
            
            if (var_2938 != 0)
                var_2938[1].d -= 1
                
                if (var_2938[1].d == 1)
                    (**var_2938)(var_2938)
                    int32_t rax_29 = *(var_2938 + 0xc)
                    *(var_2938 + 0xc) -= 1
                    
                    if (rax_29 == 1)
                        (*(*var_2938 + 8))(var_2938, 1)
            
            sub_140745b20(&var_28f0)
            
            if (rdi_2 != 0)
                rdi_2[1].d -= 1
                
                if (rdi_2[1].d == 1)
                    (**rdi_2)(rdi_2)
                    int32_t rax_33 = *(rdi_2 + 0xc)
                    *(rdi_2 + 0xc) -= 1
                    
                    if (rax_33 == 1)
                        (*(*rdi_2 + 8))(rdi_2, 1)
            
            if (rdi_2 != 0)
                rdi_2[1].d -= 1
                
                if (rdi_2[1].d == 1)
                    (**rdi_2)(rdi_2)
                    int32_t rax_37 = *(rdi_2 + 0xc)
                    *(rdi_2 + 0xc) -= 1
                    
                    if (rax_37 == 1)
                        (*(*rdi_2 + 8))(rdi_2, 1)
            
            i_7 = i_8
            rdi_1 = var_29b0_1
        
        result = sub_140d422f0(arg1, var_2980_1, &var_2998)
        int64_t* rbx_5 = var_2990_1:8.q
        
        if (rbx_5 != 0)
            rbx_5[1].d -= 1
            
            if (rbx_5[1].d == 1)
                result = (**rbx_5)(rbx_5)
                int32_t temp7_1 = *(rbx_5 + 0xc)
                *(rbx_5 + 0xc) -= 1
                
                if (temp7_1 == 1)
                    result = (*(*rbx_5 + 8))(rbx_5, 1)
        
        var_2980_1 += 4
        rdi_1 = &rdi_1[2]
        i_2 = i_7
        i_7 -= 1
        var_29b0_1 = rdi_1
        i_8 = i_7
    while (i_2 != 1)
    r14 = rax_4
    i_4 = 0x100

if (r14 != 0)
    int64_t* rdi_3 = &var_2038
    
    do
        int16_t* rdx_6
        
        if (rdi_3[1].d == 0)
            rdx_6 = &data_142d40450
        else
            rdx_6 = *rdi_3
        
        int32_t var_2978
        sub_140b58260(&var_2978, rdx_6, 1)
        int128_t var_2970_1 = zx.o(0)
        int32_t rcx_38
        rcx_38.b = sub_140b5b8a0(var_2978, 0) == 0
        int32_t var_2974
        result = var_2974 != 0 | rcx_38.b
        
        if (result != 0)
            sub_140d435a0(&var_2978)
            result = var_2970_1.q != 0
            
            if (result != 0)
                result = sub_140d422f0(r12, &var_2438 + (zx.q(rsi) << 2), &var_2978)
        
        int64_t* rbx_6 = var_2970_1:8.q
        
        if (rbx_6 != 0)
            rbx_6[1].d -= 1
            
            if (rbx_6[1].d == 1)
                result = (**rbx_6)(rbx_6)
                int32_t temp4_1 = *(rbx_6 + 0xc)
                *(rbx_6 + 0xc) -= 1
                
                if (temp4_1 == 1)
                    result = (*(*rbx_6 + 8))(rbx_6, 1)
        
        rsi += 1
        rdi_3 = &rdi_3[2]
    while (rsi u< r14)

int64_t i_3 = 0x100
int64_t* rdi_4 = &var_1038

do
    int64_t rcx_43 = rdi_4[-2]
    rdi_4 = &rdi_4[-2]
    i_3 -= 1
    
    if (rcx_43 != 0)
        result = sub_140a74f90(rcx_43)
while (i_3 != 0)

int64_t* rbx_7 = &var_38

do
    int64_t rcx_44 = rbx_7[-2]
    rbx_7 = &rbx_7[-2]
    i_4 -= 1
    
    if (rcx_44 != 0)
        result = sub_140a74f90(rcx_44)
while (i_4 != 0)

__security_check_cookie(var_38 ^ &var_29e8)
return result
