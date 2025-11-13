// 函数: sub_142c8a1a0
// 地址: 0x142c8a1a0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_98
int64_t rax_1 = __security_cookie ^ &var_98
int64_t r15 = 0
char* rbx = arg4
int32_t r14 = arg2
uint64_t result

if (arg4 s< 0 || (arg5 != 0 && *arg5 s< 0))
    result = 0x2b
else
    int64_t* rax_2 = data_143ccb898(0x20)
    
    if (rax_2 != 0)
        *rax_2 = 0
        int32_t result_1
        
        if (r14 s> 2)
            rax_2[2] = arg3
        label_142c8a29c:
            rax_2[1].d = r14
            
            if (arg5 == 0)
                goto label_142c8a2ae
            
            if (r14 == 4)
                char* _FileName = rax_2[2]
                
                if (0x2d == *_FileName && 0 == _FileName[1])
                    goto label_142c8a2ae
                
                struct _stat64 _Stat
                
                if (_stat64(_FileName, &_Stat) != 0 || (_Stat.st_mode & 0xf000) == 0x4000)
                    result_1 = 0x2b
                    goto label_142c8a318
                
                *arg5 += _Stat.st_size
                goto label_142c8a2ae
            
            *arg5 = &rbx[*arg5]
        label_142c8a2ae:
            int64_t** rax_5 = *arg1
            
            if (rax_5 != 0)
                *rax_5 = rax_2
            
            *arg1 = rax_2
            result = 0
        else
            if (rbx == 0)
                rbx = -ffffffffffffffff
                
                do
                    rbx = &rbx[1]
                while (rbx[arg3] != 0)
            
            if (r14 == 0)
                rax_2[2] = arg3
                r14 = 1
                rax_2[3] = rbx
                goto label_142c8a29c
            
            int64_t rax_3 = data_143ccb898(&rbx[1])
            rax_2[2] = rax_3
            
            if (rax_3 != 0)
                r15 = rax_3
                memcpy(rax_3, arg3, rbx.d)
                rbx[rax_2[2]] = 0
                rax_2[3] = rbx
                goto label_142c8a29c
            
            result_1 = (rax_3 + 0x1b).d
        label_142c8a318:
            data_143ccb8a0(rax_2)
            
            if (r15 != 0)
                data_143ccb8a0(r15)
            
            result = zx.q(result_1)
    else
        result = zx.q((rax_2 + 0x1b).d)

__security_check_cookie(rax_1 ^ &var_98)
return result
