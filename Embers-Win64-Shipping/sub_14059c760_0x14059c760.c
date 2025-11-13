// 函数: sub_14059c760
// 地址: 0x14059c760
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

*arg2 = 0
int64_t* rbx = __crt_deferred_errno_cache::get(&data_143db7b00)
int64_t* rax_1 = sub_140a7b4f0(&data_143db7b00, u"PakFile")

if (rax_1 != 0)
    int64_t r9_1 = *rax_1
    
    if ((*(r9_1 + 0x18))(rax_1, rbx, arg1, r9_1) != 0)
        int64_t r9_2 = *rax_1
        
        if ((*(r9_2 + 0x20))(rax_1, rbx, arg1, r9_2) != 0)
            rbx = rax_1
            sub_140a8cef0(&data_143db7b00, rax_1)

int64_t* rax_4 = sub_140a7b4f0(&data_143db7b00, u"CachedReadFile")

if (rax_4 != 0)
    int64_t r9_3 = *rax_4
    
    if ((*(r9_3 + 0x18))(rax_4, rbx, arg1, r9_3) != 0)
        int64_t r9_4 = *rax_4
        
        if ((*(r9_4 + 0x20))(rax_4, rbx, arg1, r9_4) != 0)
            rbx = rax_4
            sub_140a8cef0(&data_143db7b00, rax_4)

int64_t* rax_7 = sub_140a7b4f0(&data_143db7b00, u"SandboxFile")

if (rax_7 != 0)
    int64_t r9_5 = *rax_7
    
    if ((*(r9_5 + 0x18))(rax_7, rbx, arg1, r9_5) != 0)
        int64_t r9_6 = *rax_7
        
        if ((*(r9_6 + 0x20))(rax_7, rbx, arg1, r9_6) != 0)
            rbx = rax_7
            sub_140a8cef0(&data_143db7b00, rax_7)

int64_t* rax_10 = sub_140a7b4f0(&data_143db7b00, u"LogFile")

if (rax_10 != 0)
    int64_t r9_7 = *rax_10
    
    if ((*(r9_7 + 0x18))(rax_10, rbx, arg1, r9_7) != 0)
        int64_t r9_8 = *rax_10
        
        if ((*(r9_8 + 0x20))(rax_10, rbx, arg1, r9_8) != 0)
            rbx = rax_10
            sub_140a8cef0(&data_143db7b00, rax_10)

int64_t result
result.b = rbx != __crt_deferred_errno_cache::get(&data_143db7b00)
*arg2 = result.b
result.b = 1
return result
