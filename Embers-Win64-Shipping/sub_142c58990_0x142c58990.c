// 函数: sub_142c58990
// 地址: 0x142c58990
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t* i = *(arg1 + 0x8a0)

if (i == 0)
    return 

sub_142c52530(arg1, 2, 2)

do
    int128_t*** rdi_1 = *(arg1 + 0x8b0)
    FILE* _Stream = nullptr
    char rsi_1 = *(arg1 + 0x3d9)
    char* _Buffer = nullptr
    char* _FileName = *i
    char arg_8 = 1
    int128_t*** r15_1
    int512_t entry_zmm2
    
    if (rdi_1 != 0)
        r15_1 = rdi_1
    label_142c58a32:
        r15_1[2].b = 0
        
        if (_FileName != 0)
            if (*_FileName == 0x2d && _FileName[1] == 0)
                arg_8 = 0
                _Stream = __acrt_iob_func(0)
            else if (*_FileName != 0)
                _Stream = fopen(_FileName, "rt")
        
        r15_1[3].b = rsi_1
        
        if (_Stream == 0)
            r15_1[2].b = 1
            *(arg1 + 0x8b0) = r15_1
        else
            char* _Buffer_1 = data_143ccb898(0x1388)
            _Buffer = _Buffer_1
            
            if (_Buffer_1 == 0)
                goto label_142c58a9c
            
            while (true)
                _FileName.b = 0
                char* rax_6 = fgets(_Buffer, 0x1388, _Stream)
                
                if (rax_6 == 0)
                    break
                
                while (true)
                    int64_t rcx_9 = -1
                    
                    do
                        rcx_9 += 1
                    while (rax_6[rcx_9] != 0)
                    
                    if (rcx_9 == 0 || rax_6[rcx_9 - 1] != 0xa)
                        _FileName.b = 1
                    else
                        if (_FileName.b == 0)
                            break
                        
                        _FileName.b = 0
                    
                    rax_6 = fgets(_Buffer, 0x1388, _Stream)
                    
                    if (rax_6 == 0)
                        goto label_142c58b4c
                
                if (rax_6 == 0)
                    break
                
                char r8_4
                char* _Buffer_2
                
                if (j_sub_142c704d0("Set-Cookie:", _Buffer, 0xb) == 0)
                    _Buffer_2 = _Buffer
                    r8_4 = 0
                else
                    _Buffer_2 = &_Buffer[0xb]
                    r8_4 = 1
                
                char j = *_Buffer_2
                
                if (j != 0)
                    while (j == 0x20 || j == 9)
                        j = _Buffer_2[1]
                        _Buffer_2 = &_Buffer_2[1]
                        
                        if (j == 0)
                            break
                
                entry_zmm2 =
                    DBI1::OpenModW(arg1, r15_1, r8_4, _Buffer_2, entry_zmm2, nullptr, nullptr)
            
        label_142c58b4c:
            data_143ccb8a0(_Buffer)
            
            if (arg_8 != 0)
                fclose(_Stream)
            
            r15_1[2].b = 1
            *(arg1 + 0x8b0) = r15_1
    else
        int128_t*** rax_1 = data_143ccb8b8(zx.q((rdi_1 + 1).d), zx.q((&rdi_1[4]).d))
        r15_1 = rax_1
        
        if (rax_1 == 0)
            entry_zmm2 = sub_142c64850(arg1, "ignoring failed cookie_init for %s\n", *i, entry_zmm2)
        else
            char const* const _FileName_1 = "none"
            
            if (_FileName != 0)
                _FileName_1 = _FileName
            
            int64_t rax_2 = data_143ccb8b0(_FileName_1)
            r15_1[1] = rax_2
            
            if (rax_2 != 0)
                goto label_142c58a32
            
        label_142c58a9c:
            data_143ccb8a0(_Buffer)
            
            if (rdi_1 == 0)
                data_143ccb8a0(r15_1[1])
                sub_142c58460(*r15_1)
                data_143ccb8a0(r15_1)
            
            if (arg_8 != 0 && _Stream != 0)
                fclose(_Stream)
            
            entry_zmm2 = sub_142c64850(arg1, "ignoring failed cookie_init for %s\n", *i, entry_zmm2)
    i = i[1]
while (i != 0)

sub_142c524d0(*(arg1 + 0x8a0))
*(arg1 + 0x8a0) = 0
sub_142c52570(arg1, (i + 2).d)
