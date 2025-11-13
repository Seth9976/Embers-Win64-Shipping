// 函数: sub_142c827d0
// 地址: 0x142c827d0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* rdi = *arg1
char** rsi = *(rdi + 0x250)
char* i_1
char* _FileName_1
int32_t result = sub_142c51e30(rdi, *(rdi + 0x4e38), 0, &_FileName_1, &i_1, 0)

if (result != 0)
    return result

char* _FileName = _FileName_1
char rax

if (*_FileName == 0x2f && _FileName[1] != result.b)
    rax = _FileName[2]

void* i

if (*_FileName == 0x2f && _FileName[1] != result.b && (rax == 0x3a || rax == 0x7c))
    _FileName[2] = 0x3a
    _FileName = &_FileName[1]
    i = i_1 - 1
    i_1 = i
else
    i = i_1

if (i != 0)
    char* _FileName_2 = _FileName
    
    do
        char rax_1 = *_FileName_2
        
        if (rax_1 == 0x2f)
            *_FileName_2 = 0x5c
            i = i_1
        else if (rax_1 == 0)
            data_143ccb8a0(_FileName_1)
            return 3
        
        _FileName_2 = &_FileName_2[1]
    while (&_FileName_2[neg.q(_FileName)] u< i)

int32_t rax_3 = _open(_FileName, 0x8000)
*rsi = _FileName
rsi[1] = _FileName_1
rsi[2].d = rax_3

if (*(rdi + 0x5e9) != 0 || rax_3 != 0xffffffff)
    *arg2 = 1
    return 0

sub_142c64760(rdi, "Couldn't open file %s", *(rdi + 0x4e38), arg3)
int64_t* rbx_1 = *(*arg1 + 0x250)

if (rbx_1 != 0)
    data_143ccb8a0(rbx_1[1])
    int32_t _FileHandle = rbx_1[2].d
    rbx_1[1] = 0
    *rbx_1 = 0
    
    if (_FileHandle != 0xffffffff)
        _close(_FileHandle)
    
    rbx_1[2].d = 0xffffffff

return 0x25
