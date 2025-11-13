// 函数: ?_Init@?$numpunct@G@std@@IEAAXAEBV_Locinfo@2@_N@Z
// 地址: 0x141d2f610
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_d8
int64_t rax_1 = __security_cookie ^ &var_d8

if (data_143a21be8 != 0)
    int64_t var_a8 = 0
    int128_t* var_98_1 = nullptr
    int128_t var_88
    
    while (true)
        void* rcx = **(arg1 + 0x3c8)
        
        if (rcx == 0)
            break
        
        int128_t zmm2
        int128_t zmm3
        int128_t zmm4
        int128_t zmm5
        
        if (&var_a8 != rcx + 0x10)
            zmm2 = var_a8.o
            zmm3 = var_98_1.o
            zmm4 = var_88
            int128_t var_78
            zmm5 = var_78
            var_a8.o = *(rcx + 0x10)
            var_98_1.o = *(rcx + 0x20)
            var_88 = *(rcx + 0x30)
            var_78 = *(rcx + 0x40)
            *(rcx + 0x10) = zmm2
            *(rcx + 0x20) = zmm3
            *(rcx + 0x30) = zmm4
            *(rcx + 0x40) = zmm5
        
        void* rdi_1 = *(arg1 + 0x3c8)
        *(arg1 + 0x3c8) = rcx
        int64_t var_68 = 0
        int128_t* var_58_1 = nullptr
        
        if (rcx + 0x10 != &var_68)
            zmm5 = *(rcx + 0x10)
            zmm2 = *(rcx + 0x20)
            zmm3 = *(rcx + 0x30)
            zmm4 = *(rcx + 0x40)
            *(rcx + 0x10) = var_68.o
            *(rcx + 0x20) = var_58_1.o
            int128_t var_48
            *(rcx + 0x30) = var_48
            int128_t var_38
            *(rcx + 0x40) = var_38
            var_68.o = zmm5
            var_58_1.o = zmm2
            var_48 = zmm3
            var_38 = zmm4
            
            if (zmm5.q != 0)
                int128_t* rcx_1 = &var_48
                
                if (var_58_1 != 0)
                    rcx_1 = var_58_1
                
                (*(*rcx_1 + 0x10))(rcx_1)
        
        if (rdi_1 != 0)
            if (*(rdi_1 + 0x10) != 0)
                void* rax_7 = *(rdi_1 + 0x20)
                void* rcx_2 = rdi_1 + 0x30
                
                if (rax_7 != 0)
                    rcx_2 = rax_7
                
                (*(*rcx_2 + 0x10))(rcx_2)
            
            j_sub_140a74f90(rdi_1)
        
        int128_t* rcx_4 = &var_88
        void* var_b8 = arg1
        
        if (var_98_1 != 0)
            rcx_4 = var_98_1
        
        var_a8((*(*rcx_4 + 8))(rcx_4), &var_b8)
    
    if (var_a8 != 0)
        int128_t* rcx_6 = &var_88
        
        if (var_98_1 != 0)
            rcx_6 = var_98_1
        
        (*(*rcx_6 + 0x10))(rcx_6)

int32_t i_3 = *(arg1 + 0x5e0)
void* rdi_2 = *(arg1 + 0x5d8)

if (i_3 != 0)
    int32_t i
    
    do
        NMP::StringCache::~StringCache(rdi_2)
        rdi_2 += 0xc0
        i = i_3
        i_3 -= 1
    while (i != 1)
    rdi_2 = *(arg1 + 0x5d8)

if (rdi_2 != 0)
    sub_140a74f90(rdi_2)

int32_t i_4 = *(arg1 + 0x5c0)
void* rdi_3 = *(arg1 + 0x5b8)

if (i_4 != 0)
    int32_t i_1
    
    do
        NMP::StringCache::~StringCache(rdi_3)
        rdi_3 += 0xf0
        i_1 = i_4
        i_4 -= 1
    while (i_1 != 1)
    rdi_3 = *(arg1 + 0x5b8)

if (rdi_3 != 0)
    sub_140a74f90(rdi_3)

int32_t i_5 = *(arg1 + 0x5a0)
void* rdi_4 = *(arg1 + 0x598)

if (i_5 != 0)
    int32_t i_2
    
    do
        NMP::StringCache::~StringCache(rdi_4)
        rdi_4 += 0x210
        i_2 = i_5
        i_5 -= 1
    while (i_2 != 1)
    rdi_4 = *(arg1 + 0x598)

if (rdi_4 != 0)
    sub_140a74f90(rdi_4)

sub_141d36a60(arg1 + 0x548)
int64_t rcx_14 = *(arg1 + 0x570)

if (rcx_14 != 0)
    sub_140a74f90(rcx_14)

int64_t rcx_15 = *(arg1 + 0x550)

if (rcx_15 != 0)
    sub_140a74f90(rcx_15)

sub_1417a2660(arg1 + 0x4f8)
sub_141d36a60(arg1 + 0x4a8)
int64_t rcx_18 = *(arg1 + 0x4d0)

if (rcx_18 != 0)
    sub_140a74f90(rcx_18)

int64_t rcx_19 = *(arg1 + 0x4b0)

if (rcx_19 != 0)
    sub_140a74f90(rcx_19)

sub_1417a2660(arg1 + 0x458)
int64_t rcx_21 = *(arg1 + 0x440)

if (rcx_21 != 0)
    sub_140a74f90(rcx_21)

int64_t rcx_22 = *(arg1 + 0x430)

if (rcx_22 != 0)
    sub_140a74f90(rcx_22)

int64_t rcx_23 = *(arg1 + 0x420)

if (rcx_23 != 0)
    sub_140a74f90(rcx_23)

int64_t rcx_24 = *(arg1 + 0x410)

if (rcx_24 != 0)
    sub_140a74f90(rcx_24)

int64_t rcx_25 = *(arg1 + 0x400)

if (rcx_25 != 0)
    sub_140a74f90(rcx_25)

int64_t rcx_26 = *(arg1 + 0x3f0)

if (rcx_26 != 0)
    sub_140a74f90(rcx_26)

int64_t rcx_27 = *(arg1 + 0x3e0)

if (rcx_27 != 0)
    sub_140a74f90(rcx_27)

int64_t* rdi_5 = *(arg1 + 0x3d8)

if (rdi_5 != 0)
    rdi_5[1].d -= 1
    
    if (rdi_5[1].d == 1)
        (**rdi_5)(rdi_5)
        int32_t temp4_1 = *(rdi_5 + 0xc)
        *(rdi_5 + 0xc) -= 1
        
        if (temp4_1 == 1)
            (*(*rdi_5 + 8))(rdi_5, 1)

sub_141c82590(arg1 + 0x3c0)
*(arg1 + 0x3b0) = 0
int64_t rcx_31 = *(arg1 + 0x3a8)

if (rcx_31 != 0)
    sub_140a74f90(rcx_31)

sub_140d3a060(arg1 + 0x368)
void* rdi_6 = *(arg1 + 0x360)

if (rdi_6 != 0)
    int64_t* rcx_33 = *(rdi_6 + 0x10)
    
    if (rcx_33 != 0)
        (**rcx_33)(rcx_33, 1)
    
    j_sub_140a74f90(rdi_6)

int64_t* rdi_7 = *(arg1 + 0x358)

if (rdi_7 != 0)
    j_sub_140a74f90(rdi_7[2])
    j_sub_140a74f90(rdi_7[1])
    j_sub_140a74f90(*rdi_7)
    j_sub_140a74f90(rdi_7)

sub_141d33230(arg1 + 0x350, *(arg1 + 0x350))
int64_t* rcx_40 = *(arg1 + 0x348)

if (rcx_40 != 0)
    (**rcx_40)(rcx_40, 1)

sub_141d2eb40(arg1 + 0x88)
void* result = sub_140d3a280(arg1)
__security_check_cookie(rax_1 ^ &var_d8)
return result
