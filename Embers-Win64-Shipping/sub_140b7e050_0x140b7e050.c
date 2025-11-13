// 函数: sub_140b7e050
// 地址: 0x140b7e050
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_c8
int64_t rax_1 = __security_cookie ^ &var_c8
int64_t* rax_2 = sub_140b7c590()
int64_t rdx = *rax_2
void* rax_3 = (*(rdx + 8))(rax_2, rdx)
int32_t var_5c = 0x80
int64_t var_88
__builtin_memset(&var_88, 0, 0x2c)
int64_t r12
r12.b = 1
int32_t var_58 = 0xffffffff
int32_t var_54 = 0
int64_t var_48 = 0
int32_t var_40 = 0

if (rax_3 != 0)
    int64_t* i = *(rax_3 + 0x48)
    r12.b = *(rax_3 + 0x111) == 0
    
    for (void* rdi_2 = sx.q(*(rax_3 + 0x50)) * 0xa8 + i; i != rdi_2; i = &i[0x15])
        int64_t rax_4
        
        if (i[2].b != 0)
            if (i[8].d s> 0)
                rax_4 = sub_1405a71a0(&i[7], arg1)
            
            if (i[8].d s<= 0 || rax_4.b != 0)
                rax_4.b = sub_1405a71a0(&i[9], arg1).b == 0
        else
            rax_4.b = 0
        
        char var_a8 = rax_4.b
        sub_140b76820(&var_88, i, &var_a8)

TEB* gsbase

if (data_143e19fb0 s> *(0x14 + *(gsbase->ThreadLocalStoragePointer + (zx.q(data_14401b1a0) << 3))))
    _Init_thread_header(&data_143e19fb0)
    
    if (data_143e19fb0 == 0xffffffff)
        sub_140b77ce0(&data_143e19eb0)
        atexit(&data_142cc0e50)
        _Init_thread_footer(&data_143e19fb0)

int64_t* var_a0
(*(data_143e19eb0 + 0x50))(&data_143e19eb0, &var_a0)
int64_t* rbx_1 = var_a0
int32_t i_5
int32_t i_3 = i_5
void* r15_2 = &rbx_1[sx.q(i_3) * 2]

if (rbx_1 == r15_2)
label_140b7e269:
    
    if (i_3 != 0)
        void* rdi_4 = &rbx_1[1]
        int32_t i_1
        
        do
            int64_t* rbx_2 = *rdi_4
            
            if (rbx_2 != 0)
                rbx_2[1].d -= 1
                
                if (rbx_2[1].d == 1)
                    (**rbx_2)(rbx_2)
                    int32_t temp2_1 = *(rbx_2 + 0xc)
                    *(rbx_2 + 0xc) -= 1
                    
                    if (temp2_1 == 1)
                        (*(*rbx_2 + 8))(rbx_2, 1)
            
            rdi_4 += 0x10
            i_1 = i_3
            i_3 -= 1
        while (i_1 != 1)
        rbx_1 = var_a0
    
    if (rbx_1 != 0)
        sub_140a74f90(rbx_1)
    
    rbx_1.b = 1
else
    while (true)
        int64_t* rcx_6 = *rbx_1
        void* rax_9 = (*(*rcx_6 + 0x60))(rcx_6)
        char rax_10
        
        if (*(rax_9 + 0xb0) != 0)
            rax_10 = sub_1405a71a0(rax_9 + 0xa8, arg1)
        
        if (*(rax_9 + 0xb0) == 0 || rax_10 != 0)
            int64_t* rcx_8 = *rbx_1
            char rax_12 = (*(*rcx_8 + 0x40))(rcx_8, zx.q(r12.b))
            int64_t* rcx_9 = *rbx_1
            char rdi_3 = rax_12
            int64_t rdx_7 = *rcx_9
            int32_t var_90
            sub_1408f1b50(&var_88, &var_90, (*(rdx_7 + 8))(rcx_9, rdx_7))
            int64_t rcx_11 = sx.q(var_90)
            void* const rax_16
            
            if (rcx_11.d == 0xffffffff)
                rax_16 = nullptr
            else
                rax_16 = (rcx_11 << 5) + var_88
            
            char* rcx_12 = rax_16 + 0x10
            
            if (rax_16 == 0)
                rcx_12 = nullptr
            
            if (rcx_12 != 0)
                rdi_3 = *rcx_12
            
            int64_t* rcx_13 = *rbx_1
            void* rax_18
            
            if ((*(*rcx_13 + 0x58))(rcx_13).d != 0 || rax_12 == 0)
                rax_18.b = 0
            else
                int64_t* rcx_14 = *rbx_1
                
                if (*((*(*rcx_14 + 0x60))(rcx_14) + 0xfc) != 0)
                    rax_18.b = 0
                else
                    rax_18.b = 1
            
            if (rdi_3 != rax_18.b)
                int32_t i_4 = i_5
                
                if (i_4 != 0)
                    void* rdi_6 = &var_a0[1]
                    int32_t i_2
                    
                    do
                        rbx_1 = *rdi_6
                        
                        if (rbx_1 != 0)
                            rbx_1[1].d -= 1
                            
                            if (rbx_1[1].d == 1)
                                (**rbx_1)(rbx_1)
                                int32_t temp5_1 = *(rbx_1 + 0xc)
                                *(rbx_1 + 0xc) -= 1
                                
                                if (temp5_1 == 1)
                                    (*(*rbx_1 + 8))(rbx_1, 1)
                        
                        rdi_6 += 0x10
                        i_2 = i_4
                        i_4 -= 1
                    while (i_2 != 1)
                
                int64_t* rcx_24 = var_a0
                
                if (rcx_24 != 0)
                    sub_140a74f90(rcx_24)
                
                rbx_1.b = 0
                break
        
        rbx_1 = &rbx_1[2]
        
        if (rbx_1 == r15_2)
            i_3 = i_5
            rbx_1 = var_a0
            goto label_140b7e269

int32_t var_40_1 = 0

if (var_48 != 0)
    sub_140a74f90(var_48)

sub_1405df330(&var_88)
__security_check_cookie(rax_1 ^ &var_c8)
return zx.q(rbx_1.b)
