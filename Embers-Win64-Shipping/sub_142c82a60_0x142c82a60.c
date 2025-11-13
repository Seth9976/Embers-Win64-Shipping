// 函数: sub_142c82a60
// 地址: 0x142c82a60
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_b8
int64_t rax_1 = __security_cookie ^ &var_b8
int64_t* rbx = *(*arg1 + 0x250)
char* rax_3 = strchr(*rbx, 0x5c)
void* rdi = *arg1
int64_t rbp = 0
int64_t rsi = *(rdi + 0xa80)
*(rdi + 0x240) = rsi
uint64_t result

if (rax_3 != 0 && rax_3[1] != 0)
    int64_t _OpenFlag = 0x8109
    
    if (*(rdi + 0x4e50) == 0)
        _OpenFlag = 0x8301
    
    int32_t _FileHandle = _open(*rbx, _OpenFlag, zx.q(*(*arg1 + 0x614)))
    int512_t entry_zmm2
    
    if (_FileHandle s>= 0)
        int64_t rdx_1 = *(rdi + 0x4e68)
        
        if (rdx_1 != -1)
            sub_142c6f270(rdi, rdx_1)
        
        if (*(rdi + 0x4e50) s>= 0)
            goto label_142c82c1b
        
        struct _stat64 _Stat
        
        if (_fstat64(_FileHandle, &_Stat) == 0)
            *(rdi + 0x4e50) = _Stat.st_size
        label_142c82c1b:
            int32_t rbx_1
            int32_t i
            
            do
                int32_t var_98
                int32_t rax_7
                int64_t rdx_4
                int512_t zmm2
                rax_7, rdx_4, zmm2 = sub_142c68080(arg1, *(rdi + 0x598), &var_98, entry_zmm2)
                rbx_1 = rax_7
                
                if (rax_7 != 0)
                    break
                
                int64_t rax_8 = sx.q(var_98)
                
                if (rax_8.d s<= 0)
                    int32_t rcx_14 = rbx_1
                    
                    if (sub_142c6f450(arg1, rdx_4, zmm2) != 0)
                        rcx_14 = 0x2a
                    
                    rbx_1 = rcx_14
                    break
                
                int64_t rbx_2 = rax_8
                int64_t rax_9 = *(rdi + 0x4e50)
                int64_t rdx_5
                
                if (rax_9 == 0)
                    rdx_5 = rsi
                else if (rbx_2 s> rax_9)
                    rdx_5 = rax_9 + rsi
                    *(rdi + 0x4e50) = 0
                    rbx_2 -= rax_9
                else
                    int64_t rax_10 = rax_9 - rbx_2
                    rbx_2 = 0
                    *(rdi + 0x4e50) = rax_10
                    rdx_5 = rsi
                
                if (sub_142c56240(_FileHandle, rdx_5, rbx_2.d) != rbx_2)
                    rbx_1 = 0x37
                    break
                
                rbp += rbx_2
                int32_t rax_12
                int512_t zmm2_1
                rax_12, zmm2_1 = sub_142c6f450(arg1, sub_142c6f1b0(rdi, rbp), zmm2)
                
                if (rax_12 != 0)
                    rbx_1 = 0x2a
                    break
                
                uint64_t var_78[0x2]
                int128_t var_88 = *sub_142c59600(&var_78)
                i, entry_zmm2 = sub_142c6fd10(rdi, &var_88, zmm2_1)
                rbx_1 = i
            while (i == 0)
            _close(_FileHandle)
            result = zx.q(rbx_1)
        else
            _close(_FileHandle)
            sub_142c64760(rdi, "Can't get the size of %s", *rbx, entry_zmm2)
            result = 0x17
    else
        sub_142c64760(rdi, "Can't open %s for writing", *rbx, entry_zmm2)
        result = 0x17
else
    result = 0x25

__security_check_cookie(rax_1 ^ &var_b8)
return result
