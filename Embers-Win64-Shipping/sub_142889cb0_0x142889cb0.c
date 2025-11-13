// 函数: sub_142889cb0
// 地址: 0x142889cb0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

__chkstk(0x220)
void var_238
int64_t rax_1 = __security_cookie ^ &var_238
int32_t* rcx = nullptr
int64_t rax_2 = 0
int32_t* var_200
__builtin_memset(&var_200, 0, 0x18)

if (*(arg1 + 0x4d8) == 1)
    rax_2 = sub_14285b130(arg1)
    rcx = var_200

int64_t r10 = *(arg1 + 0x590)
int64_t result
int32_t var_210_1
uint64_t var_1f8
char* var_1f0
int32_t rdx_1
int32_t r9_2

if (r10 == 0)
label_142889d9a:
    
    if (rcx != 0)
    label_142889f07:
        sub_1428574d0(*(arg1 + 0x510))
        int32_t* rdi_3 = var_200
        *(arg1 + 0x510) = rdi_3
        
        if (rdi_3 != 0)
            sub_1428a6780(*(arg1 + 0x518))
            int64_t rax_9 = sub_1428a6af0(var_1f0, var_1f8, "ssl\statem\extensions_clnt.c", 0x32e)
            *(arg1 + 0x518) = rax_9
            
            if (rax_9 == 0)
                var_210_1 = 0x331
                rdx_1 = (rax_9 + 0x50).d
                r9_2 = (rax_9 + 0x44).d
                goto label_142889d80
            
            rdi_3 = var_200
            *(arg1 + 0x520) = var_1f8
        
        if (*(arg1 + 0x84) != 2)
            *(arg1 + 0x16e0) = 0
            result = 2
        else
            int32_t* rax_11 = *(arg1 + 0x508)
            
            if (rax_11[0x67] != 0)
                rdi_3 = rax_11
            label_14288a008:
                *(arg1 + 0x16e0) = rdi_3[0x67]
                int64_t r8_5 = *(rdi_3 + 0x158)
                
                if (r8_5 != 0)
                    char* rax_13 = *(arg1 + 0x630)
                    
                    if (rax_13 == 0)
                    label_14288a047:
                        var_210_1 = 0x346
                        rdx_1 = 0x50
                        r9_2 = 0xe7
                        goto label_142889d80
                    
                    void* r8_6 = r8_5 - rax_13
                    uint32_t i
                    uint32_t rdx_9
                    
                    do
                        rdx_9 = zx.d(*rax_13)
                        i = zx.d(*(rax_13 + r8_6))
                        
                        if (rdx_9 != i)
                            break
                        
                        rax_13 = &rax_13[1]
                    while (i != 0)
                    
                    if (rdx_9 - i != 0)
                        goto label_14288a047
                
                char* rcx_16 = *(arg1 + 0x6c0)
                
                if (rcx_16 == 0 && *(rdi_3 + 0x1a0) != rcx_16)
                    var_210_1 = 0x34d
                    rdx_1 = (&rcx_16[0x50]).d
                    r9_2 = 0xde
                    goto label_142889d80
                
                int128_t zmm6
                int128_t var_28_1 = zmm6
                int32_t var_210_4
                
                if (*(rdi_3 + 0x1a0) == 0)
                label_14288a174:
                    
                    if (sub_142873b60(arg2, 0x2a, 2) == 0)
                    label_14288a1e6:
                        var_210_4 = 0x371
                        goto label_14288a1ee
                    
                    if (sub_142873e80(arg2, 2) == 0)
                        goto label_14288a1e6
                    
                    if (sub_1428736e0(arg2) == 0)
                        goto label_14288a1e6
                    
                    *(arg1 + 0x6e8) = 1
                    result = 1
                    *(arg1 + 0x6ec) = 1
                else
                    int64_t rax_14 = *(arg1 + 0x6c8)
                    
                    if (rax_14 u> 0x7fffffffffffffff)
                        var_210_4 = 0x35b
                    label_14288a1ee:
                        sub_142856580(arg1, 0x50, 0x212, 0x44, "ssl\statem\extensions_clnt.c", 
                            var_210_4)
                        result = 0
                    else
                        zmm6 = rcx_16.o
                        
                        while (true)
                            if (rax_14 != 0)
                                uint64_t r8_7 = zx.q(*rcx_16)
                                int128_t var_1e8_1
                                var_1e8_1.q = &rcx_16[1]
                                var_1e8_1:8.q = zmm6:8.q - 1
                                
                                if (zmm6:8.q - 1 u>= r8_7)
                                    var_1e8_1.q = &rcx_16[1 + r8_7]
                                    int64_t rax_16 = *(rdi_3 + 0x1a8)
                                    var_1e8_1:8.q = zmm6:8.q - 1 - r8_7
                                    zmm6 = var_1e8_1
                                    char* var_1d8_1
                                    var_1d8_1.o = zmm6
                                    
                                    if (r8_7 == rax_16)
                                        if (sub_1428bc500(&rcx_16[1], *(rdi_3 + 0x1a0), rax_16)
                                                == 0)
                                            goto label_14288a174
                                        
                                        rcx_16 = var_1d8_1
                                        continue
                                    else
                                        rcx_16 = var_1d8_1
                                        continue
                            
                            break
                        
                        sub_142856580(arg1, 0x50, 0x212, 0xde, "ssl\statem\extensions_clnt.c", 
                            0x368)
                        result = 0
            else
                if (rdi_3 != 0 && rdi_3[0x67] != 0)
                    goto label_14288a008
                
                *(arg1 + 0x16e0) = 0
                result = 2
    else
    label_142889da3:
        int64_t rdi_1 = *(arg1 + 0x578)
        
        if (rdi_1 == 0)
            goto label_142889f07
        
        char var_1c8
        memset(&var_1c8, 0, 0x81)
        void var_138
        int32_t rax_4 = rdi_1(arg1, 0, &var_1c8, 0x80, &var_138, 0x100)
        uint64_t rdi_2 = zx.q(rax_4)
        
        if (rdi_2 u> 0x100)
            rdx_1 = 0x28
            var_210_1 = 0x2ff
            r9_2 = 0x44
            goto label_142889d80
        
        if (rax_4 == 0)
            goto label_142889f07
        
        int32_t i_1 = 0
        int16_t var_208 = 0x113
        char* rcx_6 = &var_1c8
        
        if (var_1c8 != 0)
            while (i_1 u< 0x80000000)
                rcx_6 = &rcx_6[1]
                i_1 += 1
                
                if (*rcx_6 == 0)
                    break
        
        uint64_t rax_5 = zx.q(i_1) & 0x7fffffff
        var_1f8 = rax_5
        
        if (rax_5 u<= 0x80)
            var_1f0 = &var_1c8
            int64_t rax_6 = sub_142858c60(arg1, &var_208)
            
            if (rax_6 == 0)
                var_210_1 = 0x316
                rdx_1 = (rax_6 + 0x50).d
                r9_2 = (rax_6 + 0x44).d
                goto label_142889d80
            
            int32_t* rax_7 = sub_1428577b0()
            var_200 = rax_7
            int32_t rax_8
            
            if (rax_7 != 0)
                rax_8 = sub_14284e860(rax_7, &var_138, rdi_2)
            
            if (rax_7 != 0 && rax_8 != 0)
                sub_1428578e0(var_200, rax_6)
                sub_1428578f0(var_200, 0x304)
                sub_1428b8960(&var_138, rdi_2)
                goto label_142889f07
            
            sub_142856580(arg1, 0x50, 0x212, 0x44, "ssl\statem\extensions_clnt.c", 0x321)
            sub_1428b8960(&var_138, rdi_2)
            result = 0
        else
            sub_142856580(arg1, 0x50, 0x212, 0x44, "ssl\statem\extensions_clnt.c", 0x309)
            result = 0
else
    int32_t rax_3 = r10(arg1, rax_2, &var_1f0, &var_1f8, &var_200)
    rcx = var_200
    
    if (rax_3 != 0)
        if (rcx == 0)
            goto label_142889da3
        
        if (*rcx == 0x304)
            goto label_142889d9a
        
        goto label_142889d61
    
label_142889d61:
    sub_1428574d0(rcx)
    rdx_1 = 0x50
    var_210_1 = 0x2f0
    r9_2 = 0xdb
label_142889d80:
    sub_142856580(arg1, rdx_1, 0x212, r9_2, "ssl\statem\extensions_clnt.c", var_210_1)
    result = 0
__security_check_cookie(rax_1 ^ &var_238)
return result
