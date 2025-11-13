// 函数: sub_1406c1e40
// 地址: 0x1406c1e40
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_d8
int64_t rax_1 = __security_cookie ^ &var_d8
*(*(arg1 + 0x40) + 0x1d8) = arg3
int32_t* i_1 = nullptr
int64_t var_b0 = 0
void* rsi = *(arg1 + 0x40)

while (true)
    void* rdx = **(rsi + 0x1b8)
    
    if (rdx == 0)
        break
    
    int32_t r14_1 = *(rdx + 8)
    int64_t rcx = *(rsi + 0x1b8)
    *(rsi + 0x1b8) = rdx
    *(rdx + 8) = 0
    j_sub_140a74f90(rcx)
    int64_t rbx_1 = sx.q(var_b0.d)
    int32_t rax_4 = (rbx_1 + 1).d
    var_b0.d = rax_4
    
    if (rax_4 s> var_b0:4.d)
        sub_1405a4cf0(&i_1)
    
    i_1[rbx_1] = r14_1

for (int32_t* i = i_1; i != &i[sx.q(var_b0.d)]; i = &i[1])
    int64_t* rcx_2 = *(arg1 + 0x18)
    (**rcx_2)(rcx_2, zx.q(*i))

int64_t var_a8 = 0
int128_t* var_98 = nullptr
int128_t var_88
int64_t* result

while (true)
    result = *(arg1 + 0x38)
    void* rcx_3 = *result
    
    if (rcx_3 == 0)
        break
    
    int128_t zmm2
    int128_t zmm3
    int128_t zmm4
    int128_t zmm5
    
    if (&var_a8 != rcx_3 + 0x10)
        zmm2 = var_a8.o
        zmm3 = var_98.o
        zmm4 = var_88
        int128_t var_78
        zmm5 = var_78
        var_a8.o = *(rcx_3 + 0x10)
        var_98.o = *(rcx_3 + 0x20)
        var_88 = *(rcx_3 + 0x30)
        var_78 = *(rcx_3 + 0x40)
        *(rcx_3 + 0x10) = zmm2
        *(rcx_3 + 0x20) = zmm3
        *(rcx_3 + 0x30) = zmm4
        *(rcx_3 + 0x40) = zmm5
    
    void* rbx_2 = *(arg1 + 0x38)
    *(arg1 + 0x38) = rcx_3
    int64_t rcx_4 = 0
    int64_t var_68 = 0
    int128_t* rdx_4 = nullptr
    int128_t* var_58_1 = nullptr
    int128_t var_48
    
    if (rcx_3 + 0x10 != &var_68)
        zmm2 = *(rcx_3 + 0x10)
        zmm3 = *(rcx_3 + 0x20)
        zmm4 = *(rcx_3 + 0x30)
        zmm5 = *(rcx_3 + 0x40)
        *(rcx_3 + 0x10) = var_68.o
        *(rcx_3 + 0x20) = var_58_1.o
        *(rcx_3 + 0x30) = var_48
        int128_t var_38
        *(rcx_3 + 0x40) = var_38
        var_68.o = zmm2
        var_58_1.o = zmm3
        var_48 = zmm4
        var_38 = zmm5
        rdx_4 = var_58_1
        rcx_4 = var_68
    
    if (rcx_4 != 0)
        int128_t* rcx_5 = &var_48
        
        if (rdx_4 != 0)
            rcx_5 = rdx_4
        
        (*(*rcx_5 + 0x10))(rcx_5, rdx_4)
    
    if (rbx_2 != 0)
        if (*(rbx_2 + 0x10) != 0)
            void* rax_10 = *(rbx_2 + 0x20)
            void* rcx_6 = rbx_2 + 0x30
            
            if (rax_10 != 0)
                rcx_6 = rax_10
            
            (*(*rcx_6 + 0x10))(rcx_6)
        
        j_sub_140a74f90(rbx_2)
    
    int128_t* rcx_8 = &var_88
    
    if (var_98 != 0)
        rcx_8 = var_98
    
    var_a8((*(*rcx_8 + 8))(rcx_8))

if (var_a8 != 0)
    int128_t* rcx_10 = &var_88
    
    if (var_98 != 0)
        rcx_10 = var_98
    
    result = (*(*rcx_10 + 0x10))(rcx_10)

int32_t* i_2 = i_1

if (i_2 != 0)
    result = sub_140a74f90(i_2)

__security_check_cookie(rax_1 ^ &var_d8)
return result
