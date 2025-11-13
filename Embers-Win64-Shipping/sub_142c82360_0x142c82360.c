// 函数: sub_142c82360
// 地址: 0x142c82360
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_178
int64_t rax_1 = __security_cookie ^ &var_178
void* rbx = *arg1
int32_t result_2 = 0
int64_t st_size = 0
int64_t r12
r12.b = 0
int64_t r13 = 0
char* r15 = *(rbx + 0xa80)
*arg2 = 1
sub_142c63420(rbx)
sub_142c6f2a0(rbx)
int32_t result

if (*(rbx + 0x5e9) == 0)
    int32_t _FileHandle = *(*(*arg1 + 0x250) + 0x10)
    struct _stat64 _Stat
    int32_t rax_3
    int64_t r8_1
    rax_3, r8_1 = _fstat64(_FileHandle, &_Stat)
    
    if (rax_3 == 0xffffffff)
    label_142c82437:
        
        if (*(rbx + 0x5e8) == 0 || *(rbx + 0x5e5) == 0 || r12.b == 0)
            int64_t r8_5 = sub_142c82980(arg1)
            int64_t rcx_15 = *(rbx + 0x4e50)
            
            if (rcx_15 s>= 0)
                goto label_142c825d0
            
            if (r12.b != 0)
                *(rbx + 0x4e50) = rcx_15 + _Stat.st_size
            label_142c825d0:
                int64_t rax_12 = *(rbx + 0x4e50)
                
                if (rax_12 s> st_size)
                    sub_142c64760(rbx, "failed to resume file:// transfer", r8_5, arg3)
                    result = 0x24
                else
                    int64_t rdi = st_size - rax_12
                    int64_t rax_13 = *(rbx + 0xe8)
                    
                    if (rax_13 s> 0)
                        rdi = rax_13
                    
                    char* rsi
                    
                    if (r12.b == 0 || rdi == 0)
                        rsi.b = 0
                    else
                        rsi.b = 1
                    
                    if (r12.b != 0)
                        sub_142c6f180(rbx, rdi)
                    
                    int64_t _Offset = *(rbx + 0x4e50)
                    int64_t rax_14
                    
                    if (_Offset != 0)
                        rax_14 = _lseeki64(_FileHandle, _Offset, 0)
                    
                    if (_Offset != 0 && *(rbx + 0x4e50) != rax_14)
                        result = 0x24
                    else
                        sub_142c6f300(rbx, 7)
                        
                        while (true)
                            int64_t rax_15
                            
                            if (rsi.b == 0)
                                rax_15 = sx.q(*(rbx + 0x598) - 1)
                            else
                                rax_15 = sx.q(*(rbx + 0x598))
                                
                                if (rdi s< rax_15)
                                    rax_15 = sub_14058e700(rdi)
                            
                            int64_t rax_18
                            int64_t rdx_8
                            rax_18, rdx_8 =
                                x3cdb3392::close::operator[]::environment_strings_traits::close(
                                _FileHandle, r15, rax_15.d)
                            
                            if (rax_18 s> 0)
                                r15[rax_18] = 0
                                
                                if (rsi.b == 0 || rdi != 0)
                                    r13 += rax_18
                                    int64_t rax_20 = rdi - rax_18
                                    
                                    if (rsi.b == 0)
                                        rax_20 = rdi
                                    
                                    rdi = rax_20
                                    int512_t zmm2_4
                                    result, zmm2_4 = sub_142c645e0(arg1, 1, r15, rax_18, arg3)
                                    
                                    if (result != 0)
                                        break
                                    
                                    int32_t rax_21
                                    int64_t rdx_11
                                    int512_t zmm2_5
                                    rax_21, rdx_11, zmm2_5 =
                                        sub_142c6f450(arg1, sub_142c6f0c0(rbx, r13), zmm2_4)
                                    
                                    if (rax_21 != 0)
                                        sub_142c6f450(arg1, rdx_11, zmm2_5)
                                        result = 0x2a
                                        break
                                    
                                    uint64_t var_108[0x2]
                                    int128_t var_118 = *sub_142c59600(&var_108)
                                    int32_t result_3
                                    result_3, rdx_8, arg3 = sub_142c6fd10(rbx, &var_118, zmm2_5)
                                    result_2 = result_3
                                    
                                    if (result_3 == 0)
                                        continue
                            
                            if (sub_142c6f450(arg1, rdx_8, arg3) != 0)
                                result_2 = 0x2a
                            
                            result = result_2
                            break
            else
                sub_142c64760(rbx, "Can't get the size of file.", r8_5, arg3)
                result = 0x1a
        else
            char var_98[0x50]
            int512_t zmm2_1
            result, zmm2_1 = sub_142c645e0(arg1, 3, &var_98, 0, 
                sub_142c564b0(&var_98, 0x50, "Content-Length: %I64d\r\n", st_size, arg3))
            
            if (result == 0)
                int512_t zmm2_2
                result, zmm2_2 =
                    sub_142c645e0(arg1, result + 3, "Accept-ranges: bytes\r\n", 0, zmm2_1)
                
                if (result == 0)
                    int32_t var_f8
                    result = sub_142c705a0(_Stat.st_mtime, &var_f8)
                    
                    if (result == 0)
                        int32_t var_e0
                        int32_t rdx_4 = var_e0 - 1
                        
                        if (var_e0 == 0)
                            rdx_4 = 6
                        
                        int32_t var_130_1 = var_f8
                        int32_t var_f4
                        int32_t var_138_1 = var_f4
                        int32_t var_f0
                        int32_t var_140_1 = var_f0
                        int32_t var_e4
                        int32_t var_148_1 = var_e4 + 0x76c
                        int32_t var_e8
                        int64_t var_150_1 = (&data_1436b5320)[sx.q(var_e8)]
                        int32_t var_ec
                        int32_t var_158_1 = var_ec
                        int32_t result_1 = sub_142c645e0(arg1, 3, &var_98, 0, 
                            sub_142c564b0(&var_98, 0x50, 
                                "Last-Modified: %s, %02d %s %4d %02d:%02d:%02d GMT\r\n", 
                                (&data_1436b52b0)[sx.q(rdx_4)], zmm2_2))
                        
                        if (result_1 == 0)
                            sub_142c6f180(rbx, st_size)
                        
                        result = result_1
    else
        r12.b = 1
        st_size = _Stat.st_size
        *(rbx + 0x4efc) = _Stat.st_mtime.d
        
        if (*(rbx + 0x4e48) != 0 || *(rbx + 0x428) == 0)
            goto label_142c82437
        
        char rax_5
        rax_5, arg3 = sub_142c68580(rbx, sx.q(_Stat.st_mtime.d), r8_1, arg3)
        
        if (rax_5 != 0)
            goto label_142c82437
        
        *arg2 = 1
        result = 0
else
    result = sub_142c82a60(arg1)

__security_check_cookie(rax_1 ^ &var_178)
return result
