// 函数: sub_140d20910
// 地址: 0x140d20910
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

char arg_8 = 0
char* var_10 = &arg_8
void*** (* var_18)() = sub_140884c50
void* rax
int64_t r9
rax, r9 = sub_140a756e0(&var_18, &data_14397f5f0)

if (*(rax + 0x34) == 0)
    sub_140af98a0("Unknown", 0xc7a, 
        FObjectInitializer::Get() can only be used inside of UObject-derived class constructor.", r9)
    r9 = sub_140afbb40()

int64_t result

if (*(rax + 0x18) == 0)
    result = 0
else
    result = *(*(rax + 0x10) + (sx.q(*(rax + 0x18)) << 3) - 8)
    
    if (result != 0)
        return result

sub_140af98a0("Unknown", 0x41, 
    Tried to get the current ObjectInitializer, but none is set. Please use NewObject to construct new "
"UObject-derived classes.", r9)
sub_140afbb40()
return result
