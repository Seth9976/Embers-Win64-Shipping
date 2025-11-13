// 函数: sub_140ec5f00
// 地址: 0x140ec5f00
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_1e8
int64_t rax_1 = __security_cookie ^ &var_1e8
int64_t* rdi = *(arg1 + 0x2e8)
char* r12 = arg3
void* r14 = *(arg1 + 0x2e0)
void* rsi = arg1
int64_t* var_180 = rdi

if (rdi != 0)
    rdi[1].d += 1

uint128_t zmm6
uint128_t var_48 = zmm6
int64_t i_1 = sx.q((**(arg1 + 0x2a8))(arg1 + 0x2a8))
int32_t var_190
int32_t* result = sub_140eaf230(rsi, &var_190, arg2)
int128_t zmm10 = var_190
int64_t* rbx = nullptr
uint128_t zmm12 = zx.o(var_190.q)
int128_t zmm9
zmm9.d = zmm10.d f* 0.5f
int128_t zmm7 = zx.o(0)
int128_t zmm11 = 0x80000000
zmm9.d = zmm9.d f+ *(rsi + 0x2f0)
int32_t var_1a8
int32_t var_19c
uint64_t var_188
uint128_t var_160
int32_t var_150
uint128_t var_140
uint64_t var_130
int32_t var_124
uint128_t var_120
int64_t var_110
char var_10c
uint128_t var_108

if (i_1 s> 0)
    int128_t zmm8
    int128_t var_68_1 = zmm8
    int64_t* r12_1 = nullptr
    int64_t i
    
    do
        int64_t rax_4 = *(rsi + 0x2b8)
        int64_t* rbx_1 = *(r12_1 + rax_4 + 8)
        void* rsi_1 = *(r12_1 + rax_4)
        
        if (rbx_1 != 0)
            rbx_1[1].d += 1
        
        int128_t zmm0_1
        zmm0_1, result = sub_140f02120(rsi_1)
        zmm8.d = zmm10.d f- zmm0_1.d
        
        if (r14 == 0)
        label_140ec6046:
            
            if (rbx_1 != 0)
                rbx_1[1].d += 1
            
            bool cond:1_1 = data_143e20cf4 != 0
            int32_t var_198_1 = zmm7.d
            var_19c = 0x3f800000
            int32_t var_194_1 = 0
            char rcx_4
            uint128_t zmm0_2
            uint128_t zmm1_1
            char var_148_3
            
            if (cond:1_1)
                uint128_t* rax_6 = sub_140e111c0(rsi_1 + 0x1c8)
                char rdx_1 = 0
                
                if (*(rax_6 + 0x18) == 0)
                    zmm1_1 = var_140
                else
                    zmm0_2 = zx.o(rax_6[1].q)
                    rdx_1 = 1
                    zmm1_1 = *rax_6
                    var_130 = zmm0_2.q
                    var_130.d = (zmm0_2 ^ zmm11).d
                
                rcx_4 = 0
                char var_148_2 = 0
                
                if (rdx_1 != 0)
                    var_150.q = var_130
                    var_160 = zmm1_1
                    rcx_4 = 1
                    var_148_3 = 1
            else
                int128_t* rax_5 = sub_140e111c0(rsi_1 + 0x1c8)
                rcx_4 = 0
                char var_148_1 = 0
                
                if (*(rax_5 + 0x18) != 0)
                    zmm1_1 = zx.o(rax_5[1].q)
                    var_160 = *rax_5
                    var_150.q = zmm1_1.q
                    rcx_4 = 1
                    var_148_3 = 1
            
            if (rcx_4 == 0)
                zmm6 = arg2[2]
                var_150 = zmm7.d
                var_160 = data_142d8c9b0
                int32_t var_14c_1 = 0
                var_140.q = zmm12.q
                zmm7, zmm8, zmm9, zmm10, zmm11, zmm12 = sub_1408b8950(&var_124, &var_160, &arg2[7])
                zmm1_1.d = zmm6.d f* zmm7.d
                int32_t var_128_1 = 0
                var_130.d = arg2[4].d
                var_140:8.d = zmm6.d
                zmm1_1.d = zmm1_1.d f+ arg2[3]
                var_130:4.d = zmm7.d
                var_10c ^= (arg2[0xd].b ^ var_10c) & 1
                var_140:0xc.d = zmm1_1.d
            else
                if (*(rsi_1 + 0x210) != 0)
                    int64_t* rcx_5 = *(rsi_1 + 0x208)
                    
                    if (rcx_5 != 0 && (*(*rcx_5 + 0x28))(rcx_5) != 0)
                        int64_t* rcx_6
                        
                        if (*(rsi_1 + 0x210) == 0)
                            rcx_6 = nullptr
                        else
                            rcx_6 = *(rsi_1 + 0x208)
                        
                        int64_t var_168
                        (*(*rcx_6 + 0x48))(rcx_6, &var_168)
                        *(rsi_1 + 0x1f8) = var_168
                
                zmm0_2 = zx.o(*(rsi_1 + 0x1f8))
                var_1a8 = arg2[2].d
                zmm1_1 = arg2[4]
                int128_t* var_1c0_1 = &var_1a8
                var_188 = zmm0_2.q
                int32_t var_1a4_1 = arg2[3].d
                int32_t var_1a0_1 = zmm1_1.d
                zmm7, zmm8, zmm9, zmm10, zmm11, zmm12 = sub_140dd8200(&var_140, &var_190, &var_19c, 
                    &var_160, &var_188, var_1c0_1, &arg2[7])
            
            if (rbx_1 != 0)
                rbx_1[1].d += 1
            
            void* var_d0_1 = rsi_1
            var_108 = var_140
            uint128_t var_f8_1 = var_130.o
            uint64_t var_d8_1 = var_110
            uint128_t var_e8_1 = var_120
            
            if (rbx_1 != 0)
                int32_t rax_12 = rbx_1[1].d
                rbx_1[1].d = rax_12
                
                if (rax_12 == 0)
                    (**rbx_1)(rbx_1)
                    int32_t temp13_1 = *(rbx_1 + 0xc)
                    *(rbx_1 + 0xc) -= 1
                    
                    if (temp13_1 == 1)
                        (*(*rbx_1 + 8))(rbx_1, 1)
            
            result = sub_140d99900(arg3, &var_108)
            
            if (rbx_1 != 0)
                rbx_1[1].d -= 1
                
                if (rbx_1[1].d == 1)
                    result = (**rbx_1)(rbx_1)
                    int32_t temp15_1 = *(rbx_1 + 0xc)
                    *(rbx_1 + 0xc) -= 1
                    
                    if (temp15_1 == 1)
                        result = (*(*rbx_1 + 8))(rbx_1, 1)
            
            if (rbx_1 != 0)
                rbx_1[1].d -= 1
                
                if (rbx_1[1].d == 1)
                    result = (**rbx_1)(rbx_1)
                    int32_t temp16_1 = *(rbx_1 + 0xc)
                    *(rbx_1 + 0xc) -= 1
                    
                    if (temp16_1 == 1)
                        result = (*(*rbx_1 + 8))(rbx_1, 1)
            
            zmm7.d = zmm7.d f+ zmm8.d
        else if (r14 != rsi_1)
            if (r14 != 0 && not(zmm7.d f> zmm9.d))
                zmm0_1.d = zmm8.d f+ zmm7.d
                
                if (not(zmm9.d f>= zmm0_1.d))
                    zmm7 = zmm0_1
            
            goto label_140ec6046
        
        if (rbx_1 != 0)
            rbx_1[1].d -= 1
            
            if (rbx_1[1].d == 1)
                result = (**rbx_1)(rbx_1)
                int32_t temp4_1 = *(rbx_1 + 0xc)
                *(rbx_1 + 0xc) -= 1
                
                if (temp4_1 == 1)
                    result = (*(*rbx_1 + 8))(rbx_1, 1)
        
        r12_1 = &r12_1[2]
        i = i_1
        i_1 -= 1
    while (i != 1)
    rdi = var_180
    rbx = nullptr
    rsi = arg1
    r12 = arg3

if (r14 == 0)
label_140ec65e2:
    
    if (rdi != 0)
        rdi[1].d -= 1
        
        if (rdi[1].d == 1)
            result = (**rdi)(rdi)
            int32_t temp1_1 = *(rdi + 0xc)
            *(rdi + 0xc) -= 1
            
            if (temp1_1 == 1)
                result = (*(*rdi + 8))(rdi, 1)
else
    if (rdi != 0)
        rdi[1].d += 2
    
    bool cond:0_1 = data_143e20cf4 != 0
    zmm7 = *(rsi + 0x2f0)
    int32_t var_1a4_2 = zmm7.d
    var_1a8 = 0x3f800000
    int32_t var_1a0_2 = 0
    uint128_t zmm0_4
    uint128_t zmm1_2
    
    if (cond:0_1)
        int128_t* rax_22 = sub_140e111c0(r14 + 0x1c8)
        char rcx_20 = 0
        
        if (*(rax_22 + 0x18) == 0)
            zmm1_2 = var_140
        else
            zmm0_4 = zx.o(rax_22[1].q)
            rcx_20 = 1
            zmm1_2 = *rax_22
            var_130 = zmm0_4.q
            var_130.d = (zmm0_4 ^ zmm11).d
        
        if (rcx_20 == 0)
            goto label_140ec649b
        
        var_150.q = var_130
        var_160 = zmm1_2
        goto label_140ec63dd
    
    int128_t* rax_21 = sub_140e111c0(r14 + 0x1c8)
    
    if (*(rax_21 + 0x18) == 0)
    label_140ec649b:
        zmm6 = arg2[2]
        int32_t var_150_1 = zmm7.d
        var_160 = data_142d8c9b0
        int32_t var_14c_2 = 0
        var_140.q = zmm12.q
        int32_t zmm7_1 = sub_1408b8950(&var_124, &var_160, &arg2[7])
        zmm1_2.d = zmm6.d f* zmm7_1
        int32_t var_128_2 = 0
        var_130.d = arg2[4].d
        var_140:8.d = zmm6.d
        zmm1_2.d = zmm1_2.d f+ arg2[3]
        var_130:4.d = zmm7_1
        char var_10c_1 = var_10c ^ ((arg2[0xd].b ^ var_10c) & 1)
        var_140:0xc.d = zmm1_2.d
    else
        zmm1_2 = zx.o(rax_21[1].q)
        var_160 = *rax_21
        var_150.q = zmm1_2.q
    label_140ec63dd:
        char var_148_4 = 1
        
        if (*(r14 + 0x210) != 0)
            int64_t* rcx_21 = *(r14 + 0x208)
            
            if (rcx_21 != 0 && (*(*rcx_21 + 0x28))(rcx_21) != 0)
                if (*(r14 + 0x210) != 0)
                    rbx = *(r14 + 0x208)
                
                (*(*rbx + 0x48))(rbx, &var_180)
                *(r14 + 0x1f8) = var_180
        
        zmm0_4 = zx.o(*(r14 + 0x1f8))
        var_19c = arg2[2].d
        zmm1_2 = arg2[4]
        int128_t* var_1c0_2 = &var_19c
        var_188 = zmm0_4.q
        int32_t var_198_2 = arg2[3].d
        int32_t var_194_2 = zmm1_2.d
        sub_140dd8200(&var_140, &var_190, &var_1a8, &var_160, &var_188, var_1c0_2, &arg2[7])
    
    if (rdi != 0)
        rdi[1].d += 1
    
    void* var_d0_2 = r14
    var_108 = var_140
    uint128_t var_f8_2 = var_130.o
    uint64_t var_d8_2 = var_110
    uint128_t var_e8_2 = var_120
    
    if (rdi != 0)
        int32_t rax_28 = rdi[1].d
        rdi[1].d = rax_28
        
        if (rax_28 == 0)
            (**rdi)(rdi)
            int32_t temp6_1 = *(rdi + 0xc)
            *(rdi + 0xc) -= 1
            
            if (temp6_1 == 1)
                (*(*rdi + 8))(rdi, 1)
    
    result = sub_140d99900(r12, &var_108)
    
    if (rdi != 0)
        rdi[1].d -= 1
        
        if (rdi[1].d == 1)
            result = (**rdi)(rdi)
            int32_t temp8_1 = *(rdi + 0xc)
            *(rdi + 0xc) -= 1
            
            if (temp8_1 == 1)
                result = (*(*rdi + 8))(rdi, 1)
    
    if (rdi != 0)
        rdi[1].d -= 1
        
        if (rdi[1].d == 1)
            result = (**rdi)(rdi)
            int32_t temp10_1 = *(rdi + 0xc)
            *(rdi + 0xc) -= 1
            
            if (temp10_1 == 1)
                result = (*(*rdi + 8))(rdi, 1)
        
        rdi[1].d -= 1
        
        if (rdi[1].d == 1)
            result = (**rdi)(rdi)
            int32_t temp11_1 = *(rdi + 0xc)
            *(rdi + 0xc) -= 1
            
            if (temp11_1 == 1)
                result = (*(*rdi + 8))(rdi, 1)
        
        goto label_140ec65e2

__security_check_cookie(rax_1 ^ &var_1e8)
return result
