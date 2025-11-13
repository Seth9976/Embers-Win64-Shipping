// 函数: sub_142221990
// 地址: 0x142221990
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_b8
int64_t rax_1 = __security_cookie ^ &var_b8
char* var_90
int64_t* (* var_78)(int64_t* arg1, int64_t* arg2)

if (arg2 != 0)
    int64_t* rax_2
    int64_t r8
    rax_2, r8 = sub_140d3c6e0(arg1 + 0xf8)
    
    if (rax_2 != 0 && (rax_2[0x11].b & 1) != 0)
        int64_t r9_1 = *rax_2
        r8.b = 1
        var_90 = nullptr
        int64_t rax_3
        int64_t r9_2
        rax_3, r9_2 = (*(r9_1 + 0x6a8))(rax_2, 0, r8, r9_1)
        char rax_4
        
        if (rax_3 != arg1)
            rax_4 = sub_141f1e460(rax_2)
        
        if (rax_3 == arg1 || rax_4 != 0)
            if (rax_2[0x18] != 0)
                (*(*rax_2 + 0x400))(rax_2, &data_143a2de54)
            
            if ((*(arg1 + 0xc) & 0x10) == 0)
                int64_t* rax_6 = sub_140d3c6e0(arg1 + 0xf8)
                
                if (rax_6 != 0)
                    int64_t r10_1 = *rax_6
                    r9_2.b = 1
                    var_90 = nullptr
                    int32_t var_88_1 = 0
                    var_78 = nullptr
                    int64_t var_70_1 = 0
                    (*(r10_1 + 0x6f8))(rax_6, &var_90, &var_78, r9_2)
                    int32_t rsi_1 = 0
                    
                    if (var_88_1 s> 0)
                        uint64_t* r14_1 = nullptr
                        
                        do
                            uint64_t rdi_2 = *(r14_1 + var_90)
                            
                            if (rdi_2 != arg1 && sub_142216be0(rdi_2) - 2 u<= 1)
                                int64_t* rax_10 = sub_140d3c6e0(rdi_2 + 0xf8)
                                void var_68
                                
                                if (rax_10 != 0)
                                    arg4 = sub_142227c50(arg1, rdi_2, 
                                        (*(*rax_10 + 0x408))(rax_10, &var_68, 
                                            *(var_78 + (sx.q(rsi_1) << 3)), 0))
                            
                            rsi_1 += 1
                            r14_1 = &r14_1[1]
                        while (rsi_1 s< var_88_1)
                    
                    int64_t* (* rcx_11)(int64_t* arg1, int64_t* arg2) = var_78
                    
                    if (rcx_11 != 0)
                        arg4 = sub_140a74f90(rcx_11)
                    
                    char* rcx_12 = var_90
                    
                    if (rcx_12 != 0)
                        arg4 = sub_140a74f90(rcx_12)

uint64_t rax_12
rax_12.b = *(arg1 + 0xc) & 0xef
rax_12.b |= arg2 << 4
*(arg1 + 0xc) = rax_12.b

if (arg3 == 0)
    if ((rax_12.b & 0x10) == 0)
        *(arg1 + 0xcc) = 0
    else
        *(arg1 + 0xcc) = 0x3f800000

void* rdi_3

if ((rax_12.b & 0x10) == 0)
    rdi_3 = arg1 + 0xf0
    rax_12.b = 0
else
    void var_96
    
    if (sub_140d3e110(arg1 + 0x100).b == 0)
        rdi_3 = arg1 + 0xf0
        rax_12.b = 0
    else if (*sub_142230430(sub_140d3c6e0(arg1 + 0x100), &var_96, arg4) == 3)
        rdi_3 = arg1 + 0xf0
        rax_12.b = 0
    else
        rdi_3 = arg1 + 0xf0
        
        if (__crt_unique_heap_ptr<char,struct __crt_internal_free_policy>(rdi_3).b == 0)
            rax_12.b = 0
        else
            rax_12.b = 1

char result_1 = rax_12.b
char var_98 = 0
var_90 = &var_98
void* var_80 = arg1
char* var_88_2 = &result_1
char** var_70_2 = &var_90
var_78 = sub_142211fd0
char result = sub_14226a4e0(rdi_3, &var_78)

if (var_98 != 0)
    result = result_1
    int32_t zmm0
    
    if (result == 0)
        zmm0 = (zx.o(0)).d
    else
        zmm0 = 0x3f800000
    
    *(arg1 + 0xcc) = zmm0
    *(arg1 + 0xc) &= 0xef
    result = (result & 1) << 4
    *(arg1 + 0xc) |= result

__security_check_cookie(rax_1 ^ &var_b8)
return result
