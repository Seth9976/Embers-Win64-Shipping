// 函数: sub_14231b1a0
// 地址: 0x14231b1a0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_e8
int64_t rax_1 = __security_cookie ^ &var_e8
int512_t zmm1 = sub_140ce8e10(arg1, arg2)
(*(*arg2 + 0x1d8))(arg2, &data_1439a9418)
(*(*arg2 + 0x1d8))(arg2, &data_1439a93f8)
(*(*arg2 + 0x1d8))(arg2, &data_143a2fec8)
(*(*arg2 + 0x1d8))(arg2, &data_1439a9478)
(*(*arg2 + 0x1d8))(arg2, &data_1439a94d8)
(*(*arg2 + 0x1d8))(arg2, &data_1439a9518)
void var_a8
sub_141ff4780(&var_a8, arg2, 0, 0xd6)
int64_t* rax_9 = sub_1408d9160(sub_1408d9160(arg2, arg1 + 0x68, zmm1), arg1 + 0x74, zmm1)
int64_t* rdx_3 = rax_9[1]
int32_t* rax_10 = *rdx_3

if (&rax_10[1] u<= rdx_3[1])
    *(arg1 + 0x80) = *rax_10
    int64_t* rax_11 = rax_9[1]
    *rax_11 += 4
else if ((*(rax_9 + 0x29) & 0x20) != 0)
    sub_140b54070(rax_9, arg1 + 0x80, zmm1)
else
    (*(*rax_9 + 0x150))(rax_9, arg1 + 0x80, 4)

sub_141e38ee0(arg2, arg1 + 0x188, sub_142308070(arg2, arg1 + 0xb8, zmm1))

if ((arg2[5].b & 1) != 0)
    sub_141e464f0(arg1 + 0x188, *(arg1 + 0x60), 0)

(*(*arg2 + 0x1d8))(arg2, &data_143a2fec8)
int32_t rax_14
int512_t zmm1_2
rax_14, zmm1_2 = sub_140b4e7c0(arg2, &data_143a2fec8)
int64_t rbx_1 = 0
void* r13 = 1
uint64_t var_c8
uint64_t var_b8

if (rax_14 s>= 0xc)
    int64_t* rdx_8 = arg2[1]
    int64_t rcx_17 = *rdx_8
    bool cond:3_1
    
    if (rcx_17 + 4 u> rdx_8[1])
        int32_t rax_17
        rax_17.b = arg2[0xe] != 0
        var_c8.d = rax_17
        (*(*arg2 + 0x150))(arg2, &var_c8, 4)
        cond:3_1 = var_c8.d != 0
    else
        cond:3_1 = *rcx_17 != 0
        *rdx_8 = rcx_17 + 4
    
    void* r14
    r14.b = cond:3_1
    
    if (((1 & (arg2[6].d u>> 0xc).b) != 0 || r14.b != 0) && sub_140d23dc0(arg1, 0x30) == 0
            && *(arg2 + 0x2a) s>= 0)
        char rax_22 = arg2[5].b
        
        if ((1 & rax_22) != 0)
            int64_t rax_23 = j_sub_140a82f30(0x18)
            int64_t* r14_1
            
            if (rax_23 == 0)
                r14_1 = nullptr
            else
                r14_1 = sub_14232b2a0(rax_23)
            
            int64_t* rcx_23
            
            if (arg1 + 0x58 == &var_c8)
                if (r14_1 != 0)
                    sub_142307650(r14_1)
                    zmm1_2 = j_sub_140a74f90(r14_1)
                
                rcx_23 = *(arg1 + 0x58)
            else
                int64_t* r12_1 = *(arg1 + 0x58)
                *(arg1 + 0x58) = r14_1
                
                if (r12_1 == 0)
                    rcx_23 = *(arg1 + 0x58)
                else
                    sub_142307650(r12_1)
                    zmm1_2 = j_sub_140a74f90(r12_1)
                    rcx_23 = *(arg1 + 0x58)
            
            zmm1_2 = sub_142346040(rcx_23, arg2, arg1, zmm1_2)
        else if ((rax_22 & 2) != 0)
            if (r14.b != 0)
                int32_t rax_25
                rax_25, zmm1_2 = sub_142337400(*(arg1 + 0x58))
                int64_t* rcx_27 = arg2[0xe]
                var_c8 = 0
                int32_t var_c0_1 = 0
                int64_t r8_1 = *rcx_27
                (*(r8_1 + 0x140))(rcx_27, &var_c8, r8_1)
                int32_t r14_2 = 0
                
                if (var_c0_1 s> 0)
                    do
                        int32_t rax_27
                        rax_27, zmm1_2 = sub_141987fc0(*(var_c8 + (sx.q(r14_2) << 3)))
                        int32_t rcx_32
                        
                        switch (rax_27)
                            case 0, 2, 4, 6, 0xc, 0xd, 0x10, 0x12, 0x14, 0x19, 0x1b, 0x1c, 0x1f, 
                                    0x30
                                rcx_32 = 3
                            case 0xb, 0xe, 0xf, 0x11, 0x15, 0x16, 0x18, 0x1a, 0x1d, 0x1e
                                rcx_32 = 1
                            default
                                rcx_32 = *(sx.q(rax_27) * 0x14 + 0x143f025f8)
                        
                        int32_t rax_29
                        
                        if (rcx_32 == 1)
                            rax_29 = 0x4b
                        else if (rcx_32 == 3)
                            rax_29 = 0x10000
                        else
                            rax_29 = 0
                        
                        if (rax_25 s> rax_29)
                            var_b8 = 0
                            int64_t var_b0_1 = 0
                            zmm1_2 = sub_141972a50(rcx_32, &var_b8)
                            uint64_t rcx_34 = var_b8
                            
                            if (rcx_34 != 0)
                                zmm1_2 = sub_140a74f90(rcx_34)
                        
                        r14_2 += 1
                    while (r14_2 s< var_c0_1)
                
                uint64_t rcx_35 = var_c8
                
                if (rcx_35 != 0)
                    zmm1_2 = sub_140a74f90(rcx_35)
            
            zmm1_2 = sub_142346040(*(arg1 + 0x58), arg2, arg1, zmm1_2)

if ((arg2[5].b & 3) == 0)
    sub_1408dcaf0(arg2, arg1 + 0x2e0, zmm1_2)

if (arg2[8].d s< 0x136)
    int64_t var_98 = 0
    int32_t var_90_1 = 0
    int32_t var_6c_1 = 0x80
    int64_t var_88
    __builtin_memset(&var_88, 0, 0x1c)
    int32_t var_68_1 = 0xffffffff
    int32_t var_64_1 = 0
    int64_t var_58_1 = 0
    int32_t var_50_1 = 0
    zmm1_2 = sub_141e39c00(arg2, &var_98, zmm1_2)
    
    if ((arg2[5].b & 1) != 0)
        if (var_58_1 != 0)
            var_58_1 = sub_140a84c80(var_58_1, 0, 0)
        
        int32_t var_50_2 = 0
        zmm1_2 = sub_141a85200(&var_98, var_90_1 - var_64_1, 0)
    
    int32_t var_50_3 = 0
    
    if (var_58_1 != 0)
        zmm1_2 = sub_140a74f90(var_58_1)
    
    var_90_1 = 0
    int32_t var_68_2 = 0xffffffff
    int32_t var_64_2 = 0
    sub_14059a8e0(&var_88, 0)
    int64_t var_78
    
    if (var_78 != 0)
        zmm1_2 = sub_140a74f90(var_78)
    
    int64_t rcx_44 = var_98
    
    if (rcx_44 != 0)
        zmm1_2 = sub_140a74f90(rcx_44)

var_c8 = 0
int64_t var_c0_2 = 0
sub_1408dc5a0(arg2, &var_c8, zmm1_2)

if ((arg2[5].b & 1) != 0)
    int32_t rax_31
    int512_t zmm1_3
    rax_31, zmm1_3 = sub_140b4e7c0(arg2, &data_1439a9478)
    
    if (rax_31 s< 0xa)
        var_b8 = 0
        int64_t var_b0_2 = 0
        sub_1408dc390(arg2, &var_b8, zmm1_3)
        uint64_t rcx_48 = var_b8
        
        if (rcx_48 != 0)
            sub_140a74f90(rcx_48)

if ((*(arg1 + 0x13f) & 0x20) != 0)
    (*(*arg2 + 0x130))(arg2, arg1 + 0x140)

uint64_t result = sub_140b4e7c0(arg2, &data_1439a94d8)

if (result.d s< 7)
    int64_t r8_3 = sx.q(*(arg1 + 0xe0))
    
    if (r8_3 s> 1)
        if (r8_3 s>= 5)
            result = 0xb8
            int64_t i_3 = ((r8_3 - 5) u>> 2) + 1
            r13 = (i_3 << 2) + 1
            int64_t i
            
            do
                int64_t rcx_51 = *(arg1 + 0xd8)
                *(result + rcx_51 + 0x44) = 2
                
                if (not(0f f!= *(result + rcx_51 + 0x40)))
                    *(result + rcx_51 + 0x40) = 0x3f800000
                
                int64_t rcx_52 = *(arg1 + 0xd8)
                *(rcx_52 + result + 0xfc) = 2
                
                if (not(0f f!= *(rcx_52 + result + 0xf8)))
                    *(rcx_52 + result + 0xf8) = 0x3f800000
                
                int64_t rcx_53 = *(arg1 + 0xd8)
                *(result + rcx_53 + 0x1b4) = 2
                
                if (not(0f f!= *(result + rcx_53 + 0x1b0)))
                    *(result + rcx_53 + 0x1b0) = 0x3f800000
                
                int64_t rcx_54 = *(arg1 + 0xd8)
                *(result + rcx_54 + 0x26c) = 2
                
                if (not(0f f!= *(result + rcx_54 + 0x268)))
                    *(result + rcx_54 + 0x268) = 0x3f800000
                
                result += 0x2e0
                i = i_3
                i_3 -= 1
            while (i != 1)
        
        if (r13 s< r8_3)
            result = r13 * 0xb8
            void* i_4 = r8_3 - r13
            void* i_1
            
            do
                int64_t rcx_55 = *(arg1 + 0xd8)
                bool cond:5_1 = 0f f!= *(result + rcx_55 + 0x40)
                *(result + rcx_55 + 0x44) = 2
                
                if (not(cond:5_1))
                    *(result + rcx_55 + 0x40) = 0x3f800000
                
                result += 0xb8
                i_1 = i_4
                i_4 -= 1
            while (i_1 != 1)

if ((arg2[5].b & 1) != 0)
    result = sub_140b4e7c0(arg2, &data_1439a93f8)
    
    if (result.d s< 0x25)
        int64_t i_5 = sx.q(*(arg1 + 0xe0))
        
        if (i_5 s> 0)
            int64_t i_2
            
            do
                int64_t rdx_28 = *(arg1 + 0xd8)
                rbx_1 += 0xb8
                *(rbx_1 + rdx_28 - 0xa0) ^= (*(arg1 + 0x13f) << 6 ^ *(rbx_1 + rdx_28 - 0xa0)) & 0x40
                result.b = *(rbx_1 + rdx_28 - 0xa0) & 0xdf
                *(rbx_1 + rdx_28 - 0xa0) = ((*(arg1 + 0x13f) & 2) | 0xf9) << 4 | result.b
                i_2 = i_5
                i_5 -= 1
            while (i_2 != 1)

uint64_t rcx_58 = var_c8

if (rcx_58 != 0)
    result = sub_140a74f90(rcx_58)

__security_check_cookie(rax_1 ^ &var_e8)
return result
