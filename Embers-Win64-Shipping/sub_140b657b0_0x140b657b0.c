// 函数: sub_140b657b0
// 地址: 0x140b657b0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_688
int64_t rax_1 = __security_cookie ^ &var_688
int64_t rsi
rsi.b = 1
uint64_t rdi = 0
HANDLE hThread = *(arg3 + 0x4e0)
void* rax_2 = arg3 + 0x10
void ContextRecord
void* r10 = &ContextRecord
int64_t i_1 = 9
int64_t i

do
    *r10 = *rax_2
    *(r10 + 0x10) = *(rax_2 + 0x10)
    *(r10 + 0x20) = *(rax_2 + 0x20)
    *(r10 + 0x30) = *(rax_2 + 0x30)
    *(r10 + 0x40) = *(rax_2 + 0x40)
    *(r10 + 0x50) = *(rax_2 + 0x50)
    *(r10 + 0x60) = *(rax_2 + 0x60)
    r10 += 0x80
    *(r10 - 0x10) = *(rax_2 + 0x70)
    rax_2 += 0x80
    i = i_1
    i_1 -= 1
while (i != 1)
*r10 = *rax_2
*(r10 + 0x10) = *(rax_2 + 0x10)
*(r10 + 0x20) = *(rax_2 + 0x20)
*(r10 + 0x30) = *(rax_2 + 0x30)
*(r10 + 0x40) = *(rax_2 + 0x40)
*arg4 = 0
HANDLE hProcess = data_1439a9620
struct STACKFRAME64 StackFrame
memset(&StackFrame, i_1.d, 0x108)
StackFrame.__offset(0xc).d = 3
StackFrame.__offset(0x3c).d = 3
StackFrame.__offset(0x2c).d = 3
StackFrame.__offset(0x0).q = *(arg3 + 0x108)
StackFrame.__offset(0x30).q = *(arg3 + 0xa8)
StackFrame.__offset(0x20).q = *(arg3 + 0xb0)

while (rsi.b != 0)
    if (rdi.d u>= arg2)
        break
    
    BOOL rax_6 = StackWalk64(0x8664, hProcess, hThread, &StackFrame, &ContextRecord, nullptr, 
        SymFunctionTableAccess64, SymGetModuleBase64, nullptr)
    rsi.b = rax_6 != 0
    
    if (rax_6 == 0)
        GetLastError()
        break
    
    if (StackFrame.__offset(0x20).q == 0)
        break
    
    *(arg1 + (rdi << 3)) = StackFrame.__offset(0x0).q
    rdi = zx.q(rdi.d + 1)
    int32_t var_638_1 = rdi.d
    *arg4 = rdi.d

if (rdi.d u< arg2)
    __builtin_memset(arg1 + (rdi << 3), 0, zx.q(arg2 - rdi.d) << 3)

__security_check_cookie(rax_1 ^ &var_688)
return 1
