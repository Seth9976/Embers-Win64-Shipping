// 函数: _winput_s_l
// 地址: 0x141bd4440
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_3f8
int64_t rax_1 = __security_cookie ^ &var_3f8
(*(*arg1 + 0x2d0))()
int64_t rax_3 = *arg1
void* var_3a8 = nullptr
int32_t i_5 = 0
(*(rax_3 + 0x2d8))(arg1, &var_3a8)
int32_t i_3 = i_5
int64_t r14 = arg1[0xc9]
void* rbx = var_3a8
void*** var_3c0 = nullptr
int32_t i_4 = i_3

if (i_3 != 0)
    sub_1405a4be0(&var_3c0, i_3, 0)
    void*** rcx_2 = var_3c0
    int32_t i
    
    do
        *rcx_2 = *rbx
        void* rax_5 = *(rbx + 8)
        rcx_2[1] = rax_5
        
        if (rax_5 != 0)
            *(rax_5 + 8) += 1
        
        rcx_2 = &rcx_2[2]
        rbx += 0x10
        i = i_3
        i_3 -= 1
    while (i != 1)
else
    int32_t var_3b4_1 = 0

void* var_388
int64_t* rax_7 = (*(*arg1 + 0x2e8))(arg1, &var_388)
void*** var_398
void var_378
sub_140ef7200(&var_398, (*(*arg1 + 0x2e0))(arg1, &var_378), rax_7, &var_3c0, r14)
void* const r15 = 0x160
void*** r13 = var_398

if (arg1[0x2b].b == 0)
    r15 = 0x3d0

int64_t* var_390
int64_t* rbx_2 = var_390

if (var_390 != 0)
    var_390[1].d += 1

void var_368
int64_t* rax_10 = sub_141b7a5f0(&var_368)
var_3c0 = r13
i_4.q = rbx_2
rax_10[0x4e] = r15 + arg1

if (rbx_2 != 0)
    rbx_2[1].d += 1

if (&var_3c0 != &rax_10[0x49])
    var_3c0.o = *(rax_10 + 0x248)
    rbx_2 = i_4.q
    *(rax_10 + 0x248) = var_3c0.o

if (rbx_2 != 0)
    rbx_2[1].d -= 1
    
    if (rbx_2[1].d == 1)
        (**rbx_2)(rbx_2)
        int32_t temp3_1 = *(rbx_2 + 0xc)
        *(rbx_2 + 0xc) -= 1
        
        if (temp3_1 == 1)
            (*(*rbx_2 + 8))(rbx_2, 1)

if (var_390 != 0)
    var_390[1].d -= 1
    
    if (var_390[1].d == 1)
        (**var_390)(var_390)
        int32_t temp4_1 = *(var_390 + 0xc)
        *(var_390 + 0xc) -= 1
        
        if (temp4_1 == 1)
            (*(*var_390 + 8))(var_390, 1)

void*** rax_15 = j_sub_140a82f30(0x658)
void*** rdi_1 = rax_15

if (rax_15 == 0)
    rdi_1 = nullptr
else
    rax_15[1].d = 1
    *(rax_15 + 0xc) = 1
    *rdi_1 = &data_1430849b0
    
    if (rdi_1 != -0x10)
        sub_140f66aa0(&rdi_1[2])

i_4.q = rdi_1
var_3c0 = &rdi_1[2]
sub_140918950(&var_3c0, &rdi_1[2])
int64_t var_3d8_1 = 0x648
void var_3c8
void* var_3b0 = &var_3c8
void** rax_16 =
    sub_141b8aac0(&var_3c0, &var_388, rax_10, sub_140e23ed0(&rdi_1[2], "SRichTextBlock"))
int64_t* rbx_4 = rax_16[1]

if (rbx_4 != 0)
    rbx_4[1].d += 1

if (&arg1[0xcb] == &var_378)
label_141bd46f0:
    
    if (rbx_4 != 0)
        rbx_4[1].d -= 1
        
        if (rbx_4[1].d == 1)
            (**rbx_4)(rbx_4)
            int32_t temp7_1 = *(rbx_4 + 0xc)
            *(rbx_4 + 0xc) -= 1
            
            if (temp7_1 == 1)
                (*(*rbx_4 + 8))(rbx_4, 1)
else
    arg1[0xcb] = *rax_16
    int64_t* rdi_2 = arg1[0xcc]
    
    if (rbx_4 == rdi_2)
        goto label_141bd46f0
    
    arg1[0xcc] = rbx_4
    
    if (rdi_2 != 0)
        rdi_2[1].d -= 1
        
        if (rdi_2[1].d == 1)
            (**rdi_2)(rdi_2)
            int32_t temp11_1 = *(rdi_2 + 0xc)
            *(rdi_2 + 0xc) -= 1
            
            if (temp11_1 == 1)
                (*(*rdi_2 + 8))(rdi_2, 1)

int64_t* var_380

if (var_380 != 0)
    var_380[1].d -= 1
    
    if (var_380[1].d == 1)
        (**var_380)(var_380)
        int32_t temp10_1 = *(var_380 + 0xc)
        *(var_380 + 0xc) -= 1
        
        if (temp10_1 == 1)
            (*(*var_380 + 8))(var_380, 1)

int64_t* rbx_6 = i_4.q

if (rbx_6 != 0)
    rbx_6[1].d -= 1
    
    if (rbx_6[1].d == 1)
        (**rbx_6)(rbx_6)
        int32_t temp12_1 = *(rbx_6 + 0xc)
        *(rbx_6 + 0xc) -= 1
        
        if (temp12_1 == 1)
            (*(*rbx_6 + 8))(rbx_6, 1)

sub_141b841a0(&var_368)
int64_t* rbx_7 = arg1[0xcc]

if (rbx_7 != 0)
    rbx_7[1].d += 1

*arg2 = arg1[0xcb]
arg2[1] = rbx_7

if (rbx_7 != 0)
    rbx_7[1].d += 1
    
    if (rbx_7 != 0)
        rbx_7[1].d -= 1
        
        if (rbx_7[1].d == 1)
            (**rbx_7)(rbx_7)
            int32_t temp16_1 = *(rbx_7 + 0xc)
            *(rbx_7 + 0xc) -= 1
            
            if (temp16_1 == 1)
                (*(*rbx_7 + 8))(rbx_7, 1)

if (var_390 != 0)
    var_390[1].d -= 1
    
    if (var_390[1].d == 1)
        (**var_390)(var_390)
        int32_t temp15_1 = *(var_390 + 0xc)
        *(var_390 + 0xc) -= 1
        
        if (temp15_1 == 1)
            (*(*var_390 + 8))(var_390, 1)

int32_t i_2 = i_5

if (i_2 != 0)
    int64_t* rdi_4 = var_3a8 + 8
    int32_t i_1
    
    do
        int64_t* rbx_9 = *rdi_4
        
        if (rbx_9 != 0)
            rbx_9[1].d -= 1
            
            if (rbx_9[1].d == 1)
                (**rbx_9)(rbx_9)
                int32_t temp19_1 = *(rbx_9 + 0xc)
                *(rbx_9 + 0xc) -= 1
                
                if (temp19_1 == 1)
                    (*(*rbx_9 + 8))(rbx_9, 1)
        
        rdi_4 = &rdi_4[2]
        i_1 = i_2
        i_2 -= 1
    while (i_1 != 1)

void* rcx_31 = var_3a8

if (rcx_31 != 0)
    sub_140a74f90(rcx_31)

__security_check_cookie(rax_1 ^ &var_3f8)
return arg2
