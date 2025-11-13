// 函数: sub_142c8db50
// 地址: 0x142c8db50
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

__chkstk(0x470)
void var_488
int64_t rax_1 = __security_cookie ^ &var_488
int32_t result_1 = 0
int32_t rbx = arg2
uint64_t result

if (arg2 != 0)
    FILE* _Stream = sub_142905e40(arg1, "rb")
    struct _stat64i32 _Stat
    
    if (_Stream != 0)
        if (_fstat64i32(_fileno(_Stream), &_Stat) s>= 0)
            if ((_Stat.st_mode & 0x8000) == 0 && rbx s< 0)
                rbx = 0x100
            
            setbuf(_Stream, nullptr)
            void _Buffer
            
            while (true)
                int32_t rax_4 = 0x400
                
                if (rbx s> 0 && rbx s< 0x400)
                    rax_4 = rbx
                
                int32_t rax_5 = fread(&_Buffer, 1, sx.q(rax_4), _Stream)
                int32_t rax_6 = ferror(_Stream)
                int32_t* rax_7
                
                if (rax_6 != 0)
                    rax_7 = _errno()
                
                if (rax_6 != 0 && *rax_7 == 4)
                    clearerr(_Stream)
                    
                    if (rax_5 == 0)
                        continue
                else if (rax_5 == 0)
                    break
                
                sub_142897aa0(&_Buffer, rax_5, _mm_cvtepi32_pd(zx.q(rax_5)))
                result_1 += rax_5
                
                if (rbx s> 0)
                    rbx -= rax_5
                    
                    if (rbx s<= 0)
                        break
            
            sub_1428b8960(&_Buffer, 0x400)
            fclose(_Stream)
            result = zx.q(result_1)
        else
            sub_1428a5670(0x24, 0x6f, 0x71, "crypto\rand\randfile.c", 0x5f)
            sub_1428a4880(2)
            fclose(_Stream)
            result = 0xffffffff
    else
        sub_1428a5670((_Stream + 0x24).d, (_Stream + 0x6f).d, (_Stream + 0x79).d, 
            "crypto\rand\randfile.c", 0x58)
        sub_1428a4880((&_Stream->_Placeholder + 2).d)
        result = zx.q((_Stream - 1).d)
else
    result = 0

__security_check_cookie(rax_1 ^ &var_488)
return result
