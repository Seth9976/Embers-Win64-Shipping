// 函数: sub_142112190
// 地址: 0x142112190
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_68
int64_t rax_1 = __security_cookie ^ &var_68
char r14 = 0
int32_t var_38 = 0
int32_t r15 = arg3
int64_t rdi = sx.q(arg1)
uint64_t result
int64_t rcx
TEB* gsbase

if (data_143f48b50 s> *(0x14 + *(gsbase->ThreadLocalStoragePointer + (zx.q(data_14401b1a0) << 3))))
    result, rcx, arg3 = _Init_thread_header(&data_143f48b50)
    
    if (data_143f48b50 == 0xffffffff)
        int64_t* rcx_14 = data_143db18d0
        
        if (rcx_14 == 0)
            sub_140a53c40()
            rcx_14 = data_143db18d0
        
        arg3.b = 1
        int64_t* rax_21 = (*(*rcx_14 + 0xb0))(rcx_14, u"r.AnisotropicBRDF", arg3)
        int64_t rax_19
        
        if (rax_21 == 0)
            rax_19 = 0
        else
            int64_t rdx_5 = *rax_21
            rax_19 = (*(rdx_5 + 0x58))(rax_21, rdx_5)
        
        data_143f48b48 = rax_19
        result, rcx, arg3 = _Init_thread_footer(&data_143f48b50)

int64_t r12 = data_143f48b48

if (r12 != 0)
    if (data_143de5480 == 0)
        rcx = 0
    else
        result, arg3 = GetCurrentThreadId()
        rcx.b = result.d != data_143de5470

if (r12 == 0 || *(r12 + (rcx << 2)) == 0)
    rcx.b = 0
else
    rcx.b = 1

if (arg2 != 4)
    if (arg2 == 2)
        result.b = rdi.d == 0
    else if (arg2 != 6)
        if (arg2 != 1)
            if (arg2 == 3)
            label_142112332:
                
                if ((rdi.d & 0xfffffffa) != 0 || rdi.d == 4)
                    result.b = 0
                else
                    result.b = 1
            else if (arg2 != 5)
                uint32_t rsi
                rsi.b = r15 u> 1
                arg3.b = (arg5 & 0xfffffffd) == 0
                r12.b = arg5 u<= 3
                uint64_t var_48
                uint16_t rbx
                uint64_t r9_2
                int128_t zmm0
                bool cond:1_1
                
                if (rdi.d u> 0x1d)
                    rsi.b = 1
                else
                    switch (rdi)
                        case 0
                            rsi.b = r15 != 6
                        case 1
                            if (rsi.b == 0)
                                if (((arg4 u>> 0xa).b & 1) != 0)
                                    rsi.b = 1
                                else
                                    rsi.b = 0
                            else if (r15 != 4 || ((arg4 u>> 0xa).b & 1) != 0)
                                rsi.b = 1
                            else
                                rsi.b = 0
                            
                            if ((0x36c & arg4) != 0)
                                rsi.b = 1
                        case 2
                            rsi.b = r15 == 1
                        case 3, 4
                            rsi.b = 0
                        case 5, 0x12
                            rsi.b = not.b(arg4.b)
                            rsi.b &= 1
                        case 6, 7, 8
                            rbx.b = not.b(arg4.b)
                            
                            if ((rbx.b & 1) == 0)
                                rsi.b = 0
                            else if (rsi.b == 0 || r12.b == 0)
                                rsi.b = 1
                            else
                                rsi.b = 0
                        case 9
                            if (rcx.b == 0)
                                r9_2 = var_48
                                rsi.b = 0
                            else
                                int32_t var_38_1 = 1
                                int32_t var_34_1 = 4
                                var_48 = 0
                                int32_t var_40_1 = 2
                                sub_1405c4a90(&var_48, 2, 0)
                                r9_2 = var_48
                                uint64_t rcx_4 = r9_2
                                *r9_2 = var_38_1.q
                                int64_t rdx = r9_2 + (sx.q(var_40_1) << 2)
                                
                                if (r9_2 == rdx)
                                label_142112578:
                                    r14 = 1
                                    rsi.b = 0
                                else
                                    while (not(test_bit(zx.d(arg4), zx.d(*rcx_4))))
                                        rcx_4 += 4
                                        
                                        if (rcx_4 == rdx)
                                            goto label_142112578
                                    
                                    if (rsi.b != 0)
                                        r14 = 1
                                    
                                    if (rsi.b != 0 && r12.b != 0)
                                        rsi.b = 0
                                    else
                                        rsi.b = 1
                                        r14 = 1
                            
                            cond:1_1 = (r14 & 1) == 0
                        label_1421125a6:
                            
                            if (not(cond:1_1))
                                goto label_1421125ac
                        case 0xa
                            rbx.b = not.b(arg4.b)
                            
                            if (((rbx.b & 1) == 0 || (rsi.b != 0 && arg3.b != 0)) && arg9 == 0)
                                rsi.b = 0
                            else
                                rsi.b = 1
                        case 0xb
                            if (rcx.b == 0)
                                r9_2 = var_48
                                rsi.b = 0
                                cond:1_1 = (r14 & 2) == 0
                            else
                                int32_t var_38_2 = 1
                                int32_t var_34_2 = 4
                                var_48 = 0
                                int32_t var_40_2 = 2
                                sub_1405c4a90(&var_48, 2, 0)
                                r9_2 = var_48
                                uint64_t rcx_7 = r9_2
                                *r9_2 = var_38_2.q
                                int64_t rdx_1 = r9_2 + (sx.q(var_40_2) << 2)
                                
                                if (r9_2 == rdx_1)
                                label_142112658:
                                    rsi.b = 0
                                    cond:1_1 = false
                                else
                                    while (not(test_bit(zx.d(arg4), zx.d(*rcx_7))))
                                        rcx_7 += 4
                                        
                                        if (rcx_7 == rdx_1)
                                            goto label_142112658
                                    
                                    if (rsi.b != 0)
                                        r14 = 2
                                    
                                    if (rsi.b != 0 && r12.b != 0)
                                        rsi.b = 0
                                        cond:1_1 = (r14 & 2) == 0
                                    else
                                        rsi.b = 1
                                        cond:1_1 = false
                            
                            goto label_1421125a6
                        case 0xc, 0x14, 0x15, 0x16, 0x17, 0x18, 0x19, 0x1a, 0x1b
                            rsi.b = 1
                        case 0xd, 0xe
                            rsi = zx.d(arg8)
                        case 0xf
                            zmm0 = data_1432d45c0
                            var_48 = 0
                            var_38.o = zmm0
                            int32_t var_40_3 = 4
                            sub_1405c4a90(&var_48, 4, 0)
                            r9_2 = var_48
                            uint64_t rcx_9 = r9_2
                            int64_t rdx_2 = r9_2 + (sx.q(var_40_3) << 2)
                            *r9_2 = var_38.o
                            
                            if (r9_2 != rdx_2)
                                while (not(test_bit(zx.d(arg4), zx.d(*rcx_9))))
                                    rcx_9 += 4
                                    
                                    if (rcx_9 == rdx_2)
                                        goto label_1421126f2
                                
                            label_1421126fa:
                                rsi.b = 1
                                goto label_1421125ac
                            
                        label_1421126f2:
                            rsi.b = 0
                        label_1421125ac:
                            
                            if (r9_2 != 0)
                                sub_140a74f90(r9_2)
                        case 0x10
                            zmm0 = data_1432d45d0
                            var_48 = 0
                            var_38.o = zmm0
                            int32_t var_40_4 = 4
                            sub_1405c4a90(&var_48, 4, 0)
                            r9_2 = var_48
                            uint64_t rcx_11 = r9_2
                            int64_t rdx_3 = r9_2 + (sx.q(var_40_4) << 2)
                            *r9_2 = var_38.o
                            
                            if (r9_2 == rdx_3)
                                goto label_1421126f2
                            
                            do
                                if (test_bit(zx.d(arg4), zx.d(*rcx_11)))
                                    goto label_1421126fa
                                
                                rcx_11 += 4
                            while (rcx_11 != rdx_3)
                            
                            rsi.b = 0
                            goto label_1421125ac
                        case 0x11
                            int32_t var_38_3 = 4
                            int32_t var_34_3 = 9
                            var_48 = 0
                            int32_t var_40_5 = 2
                            sub_1405c4a90(&var_48, 2, 0)
                            r9_2 = var_48
                            uint64_t rcx_13 = r9_2
                            *r9_2 = var_38_3.q
                            int64_t rdx_4 = r9_2 + (sx.q(var_40_5) << 2)
                            
                            if (r9_2 == rdx_4)
                                goto label_1421126f2
                            
                            do
                                if (test_bit(zx.d(arg4), zx.d(*rcx_13)))
                                    goto label_1421126fa
                                
                                rcx_13 += 4
                            while (rcx_13 != rdx_4)
                            
                            rsi.b = 0
                            goto label_1421125ac
                        case 0x13
                            if (rsi.b == 0)
                                if (((arg4 u>> 0xa).b & 1) != 0)
                                    rsi.b = 1
                                else
                                    rsi.b = 0
                            else if (((r15 - 4) & 0xfffffffd) != 0 || ((arg4 u>> 0xa).b & 1) != 0)
                                rsi.b = 1
                            else
                                rsi.b = 0
                        case 0x1c
                            rsi.b ^= 1
                        case 0x1d
                            rsi = zx.d(arg10)
                result = zx.q(rsi.b)
            else if (rdi.d == 0 || rdi.d == 0xc)
                result.b = 1
            else
                bool cond:2_1
                
                if (rdi.d == 2)
                    cond:2_1 = r15 == 1
                label_14211229c:
                    
                    if (cond:2_1)
                        result.b = 1
                    else
                        result.b = 0
                else if (rdi.d == 1)
                label_14211228f:
                    
                    if ((r15 & 0xfffffffa) == 0)
                        cond:2_1 = r15 == 5
                        goto label_14211229c
                    
                    result.b = 1
                else if ((rdi - 0x14).d u<= 7)
                    result.b = 1
                else
                    result.b = 0
        else if ((rdi - 0x14).d u<= 7 || rdi.d == 0x1e || rdi.d == 0xc)
            result.b = 1
        else
            result = sx.q(arg6)
            
            if (result.d u> 0x10)
                result.b = 0
            else
                switch (result)
                    case 0, 1, 4
                        if (rdi.d u> 0xa || not(test_bit(0x5e3, rdi.d)))
                            result.b = 0
                        else
                            result.b = 1
                    case 2, 8
                        if (rdi.d == 0xa || rdi.d == 1)
                            result.b = 1
                        else
                            result.b = 0
                    case 3, 0xb, 0xd
                        result.b = rdi.d u<= 1
                    case 5
                        goto label_142112332
                    case 6
                        if (rdi.d u> 0xa || not(test_bit(0x423, rdi.d)))
                            result.b = 0
                        else
                            result.b = 1
                    case 7
                        if ((rdi - 5).d u<= 3 || rdi.d u<= 1)
                            result.b = 1
                        else
                            result.b = 0
                    case 9
                        if (rdi.d u> 0xa || not(test_bit(0x5c2, rdi.d)))
                            result.b = 0
                        else
                            result.b = 1
                    case 0xa
                        if ((rdi - 6).d u<= 2 || rdi.d == 1)
                            result.b = 1
                        else
                            result.b = 0
                    case 0xc, 0xf
                        if (rdi.d u<= 1 || (rdi - 5).d u<= 3)
                            result.b = 1
                        else
                            result.b = 0
                    case 0xe
                        if (rdi.d u> 0xa || not(test_bit(0x5e5, rdi.d)))
                            result.b = 0
                        else
                            result.b = 1
                    case 0x10
                        result.b = rdi.d == 0x12
    else if (rdi.d == 5 || rdi.d == 8)
        result.b = 1
    else if (rdi.d == 9)
    label_142112270:
        
        if (rcx.b != 0)
            result.b = 1
        else
            result.b = 0
    else if (rdi.d == 7 || rdi.d == 0xa)
        result.b = 1
    else
        if (rdi.d == 0xb)
            goto label_142112270
        
        if (rdi.d == 1)
            goto label_14211228f
        
        result.b = 0
else if (rdi.d == 0 || (arg7 != 0 && rdi.d == 1))
    result.b = 1
else
    result.b = 0

__security_check_cookie(rax_1 ^ &var_68)
return result
