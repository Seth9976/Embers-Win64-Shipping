// 函数: sub_142930260
// 地址: 0x142930260
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

__chkstk(0xe0)
void var_118
int64_t rax_1 = __security_cookie ^ &var_118
int64_t rax_2 = *(arg1 + 0x10)
int32_t rbx = 0
int32_t var_d0 = 0
int64_t* r12 = nullptr
char* _Str1_2 = nullptr
int32_t* r14 = nullptr
int64_t* _FileName_6 = nullptr
int32_t* var_b0 = nullptr
int64_t* _FileName_4 = arg2
int64_t* _FileName_3 = nullptr
int64_t var_b8 = 0
int64_t* _FileName_7 = arg2
int64_t* rax_3 = sub_1428a7510()
int64_t result

if (rax_3 != 0)
    char* _Str1_4 = sub_1428a6ba0("default")
    _Str1_2 = _Str1_4
    char* _Str1_6 = _Str1_4
    
    if (_Str1_4 != 0)
        if (sub_142931960(arg1) != 0)
            int64_t* rax_5 = sub_1429319b0(arg1, _Str1_2)
            int64_t* r15 = rax_5
            
            if (rax_5 != 0)
                int64_t* rdi_1 = rax_3
                int32_t var_e8_1 = 0
                int32_t var_e4_1 = 0
                
                if (sub_1428a7260(rdi_1, 0x200) == 0)
                label_142930740:
                    sub_1428a5670(0xe, 0x79, 7, "crypto\conf\conf_def.c", 0xe3)
                    r12 = nullptr
                else
                    while (true)
                        char* rbx_2 = sx.q(rbx) + rdi_1[1]
                        *rbx_2 = 0
                        sub_14289a080(_FileName_4, rbx_2, 0x1ff)
                        uint64_t rcx_5 = -1
                        rbx_2[0x1ff] = 0
                        
                        do
                            rcx_5 += 1
                        while (rbx_2[rcx_5] != 0)
                        
                        int32_t r8_2 = rcx_5.d
                        
                        if (rcx_5.d == 0)
                            while (true)
                                int64_t* _FileName_11 = _FileName_4
                                
                                if (r12.d != 0)
                                    goto label_1429304ab
                                
                                if (var_b8 == 0)
                                    goto label_142930451
                                
                                char* _FileName_5 = _FileName_3
                                int64_t* _FileName_8 = sub_142931020(_FileName_5, &var_b8)
                                _FileName_7 = _FileName_8
                                _FileName_4 = _FileName_8
                                
                                if (_FileName_8 == 0)
                                    sub_1428a6780(_FileName_5)
                                    _FileName_3 = _FileName_4
                                label_142930451:
                                    int64_t* _FileName_9 = sub_142898c80(r14)
                                    _FileName_7 = _FileName_9
                                    _FileName_4 = _FileName_9
                                    
                                    if (_FileName_9 == 0)
                                        sub_1428a71f0(rax_3)
                                        sub_1428a6780(_Str1_2)
                                        sub_142898a10(r14)
                                        result = 1
                                        break
                                
                                sub_14289aa20(_FileName_11)
                                sub_14289a080(_FileName_4, rbx_2, 0x1ff)
                                int64_t rax_7 = -1
                                rbx_2[0x1ff] = 0
                                
                                do
                                    rax_7 += 1
                                while (rbx_2[rax_7] != 0)
                                
                                r12 = zx.q(var_e4_1)
                                rcx_5 = zx.q(rax_7.d)
                                r8_2 = rax_7.d
                                
                                if (rax_7.d != 0)
                                    goto label_1429304ab
                            
                            goto label_142930b91
                        
                    label_1429304ab:
                        int32_t r9_1 = 0
                        int64_t i = sx.q(rcx_5.d)
                        var_e4_1 = 0
                        
                        if (rcx_5.d s> 0)
                            do
                                char rdx_7 = rbx_2[i - 1]
                                
                                if (rdx_7 != 0xd && rdx_7 != 0xa)
                                    break
                                
                                rcx_5 = zx.q(rcx_5.d - 1)
                                i -= 1
                            while (i s> 0)
                        
                        if (r8_2 == 0 || rcx_5.d != r8_2)
                            var_d0 += 1
                            *(sx.q(rcx_5.d) + rbx_2) = 0
                        else
                            r9_1 = 1
                            var_e4_1 = 1
                        
                        r12 = nullptr
                        int32_t rax_10 = var_e8_1 + rcx_5.d
                        var_e8_1 = rax_10
                        
                        if (rax_10 s< 1)
                            rbx = rax_10
                        label_142930569:
                            
                            if (r9_1 == 0)
                                void* _Str1 = rax_3[1]
                                rbx = 0
                                var_e8_1 = 0
                                sub_142930d50(arg1, _Str1)
                                char rdx_11
                                
                                while (true)
                                    rdx_11 = *_Str1
                                    
                                    if (rdx_11 u> 0x7f)
                                        goto label_1429305c4
                                    
                                    char r8_5 = (*(*(arg1 + 8) + (zx.q(rdx_11) << 1))).b
                                    
                                    if ((r8_5 & 0x10) == 0)
                                        break
                                    
                                    if (rdx_11 u<= 0x7f && (r8_5 & 8) != 0)
                                        break
                                    
                                    _Str1 += 1
                                
                                if (rdx_11 u> 0x7f
                                    || (*(*(arg1 + 8) + (zx.q(rdx_11) << 1)) & 8) == 0)
                                label_1429305c4:
                                    
                                    if (rdx_11 == 0x5b)
                                        void* rdi_2 = _Str1 + 1
                                        
                                        while (true)
                                            char rdx_12 = *rdi_2
                                            
                                            if (rdx_12 u> 0x7f)
                                                break
                                            
                                            char r8_6 = (*(*(arg1 + 8) + (zx.q(rdx_12) << 1))).b
                                            
                                            if ((r8_6 & 0x10) == 0)
                                                break
                                            
                                            if (rdx_12 u<= 0x7f && (r8_6 & 8) != 0)
                                                break
                                            
                                            rdi_2 += 1
                                        
                                        void* r11_1 = rdi_2
                                        
                                        while (true)
                                            void* r8_7 = r11_1
                                            char i_1
                                            
                                            while (true)
                                                i_1 = *r8_7
                                                
                                                if (i_1 u> 0x7f)
                                                    break
                                                
                                                int64_t rdx_13 = *(arg1 + 8)
                                                
                                                if ((*(rdx_13 + (zx.q(i_1) << 1)) & 0x20) == 0)
                                                    if (i_1 u> 0x7f)
                                                        break
                                                    
                                                    if ((*(*(arg1 + 8) + (zx.q(i_1) << 1)) & 0x307)
                                                            == 0)
                                                        break
                                                    
                                                    r8_7 += 1
                                                else
                                                    char rax_19 = *(r8_7 + 1)
                                                    
                                                    if (rax_19 u<= 0x7f)
                                                        r8_7 = r8_7 + 1 + ((zx.q(
                                                            zx.d(*(rdx_13 + (zx.q(rax_19) << 1)))
                                                            u>> 3) & 1) ^ 1)
                                                    else
                                                        r8_7 += 2
                                            
                                            void* r10_2 = r8_7
                                            
                                            while (i_1 u<= 0x7f)
                                                char r9_2 = (*(*(arg1 + 8) + (zx.q(i_1) << 1))).b
                                                
                                                if ((r9_2 & 0x10) == 0)
                                                    break
                                                
                                                if ((r9_2 & 8) != 0)
                                                    break
                                                
                                                i_1 = *(r10_2 + 1)
                                                r10_2 += 1
                                            
                                            if (i_1 != 0x5d)
                                                if (i_1 != 0 && r11_1 != r10_2)
                                                    r11_1 = r10_2
                                                    continue
                                                
                                                sub_1428a5670(0xe, 0x79, 0x64, 
                                                    "crypto\conf\conf_def.c", 0x144)
                                                break
                                            
                                            *r8_7 = 0
                                            bool cond:0_1 =
                                                sub_1429311c0(arg1, nullptr, &_Str1_6, rdi_2) == 0
                                            char* _Str1_5 = _Str1_6
                                            _Str1_2 = _Str1_5
                                            
                                            if (cond:0_1)
                                                goto label_142930a69
                                            
                                            int64_t* rax_26 = sub_1429317e0(arg1, _Str1_5)
                                            r15 = rax_26
                                            
                                            if (rax_26 != 0)
                                                goto label_142930702
                                            
                                            int64_t* rax_27 = sub_1429319b0(arg1, _Str1_2)
                                            r15 = rax_27
                                            
                                            if (rax_27 != 0)
                                                goto label_142930702
                                            
                                            sub_1428a5670(0xe, 0x79, 0x67, 
                                                "crypto\conf\conf_def.c", 0x14e)
                                            goto label_142930a69
                                        
                                        break
                                    
                                    char* rax_30 = sub_142930f60(arg1, _Str1)
                                    char* rsi = rax_30
                                    void* _Str1_1
                                    
                                    if (*rax_30 != 0x3a || rax_30[1] != 0x3a)
                                        _Str1_1 = _Str1_2
                                    else
                                        _Str1_1 = _Str1
                                        *rax_30 = 0
                                        _Str1 = &rax_30[2]
                                        rsi = sub_142930f60(arg1, &rax_30[2])
                                    
                                    char* rbx_3 = rsi
                                    
                                    while (true)
                                        char rdx_21 = *rbx_3
                                        
                                        if (rdx_21 u> 0x7f)
                                            break
                                        
                                        char r8_11 = (*(*(arg1 + 8) + (zx.q(rdx_21) << 1))).b
                                        
                                        if ((r8_11 & 0x10) == 0)
                                            break
                                        
                                        if (rdx_21 u<= 0x7f && (r8_11 & 8) != 0)
                                            break
                                        
                                        rbx_3 = &rbx_3[1]
                                    
                                    int32_t var_f8_6
                                    
                                    if (strncmp(_Str1, ".include", 8) != 0 || rbx_3 == _Str1 + 8)
                                        int32_t rcx_40
                                        int32_t rdx_39
                                        int32_t r8_20
                                        
                                        if (*rbx_3 != 0x3d)
                                            rdx_39 = 0x79
                                            var_f8_6 = 0x182
                                            rcx_40 = 0xe
                                            r8_20 = 0x65
                                        label_142930a60:
                                            sub_1428a5670(rcx_40, rdx_39, r8_20, 
                                                "crypto\conf\conf_def.c", var_f8_6)
                                            _FileName_4 = _FileName_7
                                            break
                                        
                                        *rsi = 0
                                        char* rax_47 = sub_142930fe0(arg1, &rbx_3[1])
                                        sub_142931670(arg1, rax_47)
                                        int64_t* rax_48 = sub_1428a6730(0x18)
                                        r12 = rax_48
                                        
                                        if (rax_48 == 0)
                                            var_f8_6 = 0x18b
                                        label_142930c6a:
                                            rdx_39 = 0x79
                                            rcx_40 = 0xe
                                            r8_20 = 0x41
                                            goto label_142930a60
                                        
                                        int64_t rax_49 = sub_1428a6ba0(_Str1)
                                        r12[2] = 0
                                        r12[1] = rax_49
                                        
                                        if (rax_49 == 0)
                                            var_f8_6 = 0x191
                                            goto label_142930c6a
                                        
                                        if (sub_1429311c0(arg1, _Str1_1, &r12[2], rax_47) == 0)
                                            _FileName_4 = _FileName_7
                                            break
                                        
                                        void* _Str1_3 = _Str1_1
                                        uint32_t i_2
                                        uint32_t rdx_35
                                        
                                        do
                                            rdx_35 = zx.d(*_Str1_3)
                                            i_2 = zx.d(*(_Str1_3 + _Str1_2 - _Str1_1))
                                            
                                            if (rdx_35 != i_2)
                                                break
                                            
                                            _Str1_3 += 1
                                        while (i_2 != 0)
                                        
                                        int64_t* rax_51
                                        
                                        if (rdx_35 - i_2 == 0)
                                            rax_51 = r15
                                        else
                                            rax_51 = sub_1429317e0(arg1, _Str1_1)
                                            
                                            if (rax_51 == 0)
                                                rax_51 = sub_1429319b0(arg1, _Str1_1)
                                                
                                                if (rax_51 == 0)
                                                    var_f8_6 = 0x19d
                                                    rdx_39 = (rax_51 + 0x79).d
                                                    rcx_40 = (rax_51 + 0xe).d
                                                    r8_20 = (rax_51 + 0x67).d
                                                    goto label_142930a60
                                        
                                        if (sub_1429316c0(arg1, rax_51, r12) == 0)
                                            var_f8_6 = 0x1a3
                                            goto label_142930c6a
                                        
                                        _FileName_4 = _FileName_7
                                        r14 = var_b0
                                        rbx = var_e8_1
                                    else
                                        int64_t* _FileName_1 = nullptr
                                        char* rcx_27 = rbx_3
                                        int64_t rdx_22
                                        
                                        while (true)
                                            char rax_35 = *rcx_27
                                            
                                            if (rax_35 u<= 0x7f)
                                                rdx_22 = *(arg1 + 8)
                                                
                                                if ((*(rdx_22 + (zx.q(rax_35) << 1)) & 8) != 0)
                                                    break
                                            
                                            rcx_27 = &rcx_27[1]
                                        
                                        void* i_3
                                        
                                        for (i_3 = rcx_27 - 1; i_3 u>= rbx_3; i_3 -= 1)
                                            char rax_37 = *i_3
                                            
                                            if (rax_37 u> 0x7f)
                                                break
                                            
                                            if ((*(rdx_22 + (zx.q(rax_37) << 1)) & 0x10) == 0)
                                                break
                                        
                                        *(i_3 + 1) = 0
                                        
                                        if (sub_1429311c0(arg1, _Str1_1, &_FileName_1, rbx_3) == 0)
                                            _FileName_4 = _FileName_7
                                            break
                                        
                                        int64_t* _FileName = _FileName_1
                                        struct _stat64i32 _Stat
                                        _Stat.st_dev = 0
                                        _Stat.st_ino = 0
                                        _Stat.st_mode = 0
                                        _Stat.st_nlink = 0
                                        _Stat.st_uid = 0
                                        _Stat.st_gid = 0
                                        _Stat.st_rdev = 0
                                        _Stat.st_size = 0
                                        _Stat.st_atime = 0
                                        _Stat.st_mtime = 0
                                        _Stat.st_ctime = 0
                                        int64_t* _FileName_2
                                        int64_t* _FileName_12
                                        int32_t var_f8_5
                                        int32_t rcx_30
                                        int32_t rdx_25
                                        int32_t r8_13
                                        
                                        if (_stat64i32(_FileName, &_Stat) s< 0)
                                            rdx_25 = 0x16
                                            var_f8_5 = 0x29f
                                            r8_13 = *_errno()
                                            rcx_30 = 2
                                        label_142930889:
                                            sub_1428a5670(rcx_30, rdx_25, r8_13, 
                                                "crypto\conf\conf_def.c", var_f8_5)
                                            sub_1428a4880(1)
                                            _FileName_12 = nullptr
                                            _FileName_2 = _FileName_3
                                        else if ((_Stat.st_mode & 0xf000) != 0x4000)
                                            _FileName_12 = sub_1428b6d90(_FileName, &data_142d948d8)
                                            _FileName_2 = _FileName_3
                                        else
                                            if (var_b8 != 0)
                                                rdx_25 = 0x74
                                                var_f8_5 = 0x2a8
                                                rcx_30 = 0xe
                                                r8_13 = 0x6f
                                                goto label_142930889
                                            
                                            _FileName_12 = sub_142931020(_FileName, &var_b8)
                                            _FileName_2 = _FileName_3
                                            
                                            if (_FileName_12 != 0)
                                                _FileName_2 = _FileName
                                            
                                            _FileName_3 = _FileName_2
                                        
                                        if (_FileName != _FileName_2)
                                            sub_1428a6780(_FileName)
                                        
                                        r14 = var_b0
                                        
                                        if (_FileName_12 == 0)
                                            _FileName_4 = _FileName_7
                                            rbx = 0
                                        else
                                            if (r14 == 0)
                                                int32_t* rax_45 = sub_142898ba0()
                                                var_b0 = rax_45
                                                r14 = rax_45
                                                
                                                if (rax_45 != 0)
                                                    goto label_14293094b
                                                
                                                var_f8_6 = 0x175
                                                goto label_142930c6a
                                            
                                        label_14293094b:
                                            _FileName_4 = _FileName_7
                                            
                                            if (sub_142898d50(r14, _FileName_4) == 0)
                                                sub_1428a5670(0xe, 0x79, 0x41, 
                                                    "crypto\conf\conf_def.c", 0x17a)
                                                break
                                            
                                            _FileName_4 = _FileName_12
                                            _FileName_7 = _FileName_12
                                            rbx = 0
                            
                        label_142930702:
                            r12 = zx.q(var_e4_1)
                        else
                            rbx = var_e8_1
                            void* rdx_9 = sx.q(rax_10) + rax_3[1]
                            char rax_12 = *(rdx_9 - 1)
                            
                            if (rax_12 u> 0x7f)
                                goto label_142930569
                            
                            int64_t rcx_11 = *(arg1 + 8)
                            
                            if ((*(rcx_11 + (zx.q(rax_12) << 1)) & 0x20) == 0)
                                goto label_142930569
                            
                            char rax_14
                            
                            if (rbx s> 1)
                                rax_14 = *(rdx_9 - 2)
                            
                            if (rbx s> 1 && rax_14 u<= 0x7f
                                    && (*(rcx_11 + (zx.q(rax_14) << 1)) & 0x20) != 0)
                                goto label_142930569
                            
                            rbx = rax_10 - 1
                            r12 = 1
                            var_e8_1 = rbx
                            var_e4_1 = 1
                        
                        rdi_1 = rax_3
                        
                        if (sub_1428a7260(rdi_1, sx.q(rbx + 0x200)) == 0)
                            goto label_142930740
                
            label_142930a69:
                _FileName_6 = _FileName_3
            else
                sub_1428a5670((rax_5 + 0xe).d, (rax_5 + 0x79).d, (rax_5 + 0x67).d, 
                    "crypto\conf\conf_def.c", 0xdb)
                _FileName_6 = nullptr
        else
            sub_1428a5670(0xe, 0x79, 0x41, "crypto\conf\conf_def.c", 0xd5)
    else
        sub_1428a5670(0xe, 0x79, 0x41, "crypto\conf\conf_def.c", 0xd0)
else
    sub_1428a5670(0xe, 0x79, 7, "crypto\conf\conf_def.c", 0xca)

sub_1428a71f0(rax_3)
sub_1428a6780(_Str1_2)

if (sub_142898c70(var_b0) s> 0)
    int32_t i_4
    
    do
        int64_t* _FileName_10 = sub_142898c80(var_b0)
        sub_14289aa20(_FileName_4)
        _FileName_4 = _FileName_10
        i_4 = sub_142898c70(var_b0)
    while (i_4 s> 0)

sub_142898a10(var_b0)
sub_1428a6780(_FileName_6)

if (var_b8 != 0)
    sub_1428b63e0(&var_b8)

uint64_t r9_6 = zx.q(var_d0)

if (arg3 != 0)
    *arg3 = r9_6.d

void var_58
sub_1428b7080(&var_58, 0xd, "%ld", r9_6)
sub_1428a4880(2)

if (rax_2 != *(arg1 + 0x10))
    sub_1428f32c0()
    *(arg1 + 0x10) = 0

if (r12 != 0)
    sub_1428a6780(r12[1])
    sub_1428a6780(r12[2])
    sub_1428a6780(r12)

result = 0
label_142930b91:
__security_check_cookie(rax_1 ^ &var_118)
return result
