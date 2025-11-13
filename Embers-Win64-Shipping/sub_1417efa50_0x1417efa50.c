// 函数: sub_1417efa50
// 地址: 0x1417efa50
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* rax = data_143f5b298
uint64_t rsi
rsi.b = 0
int64_t* rcx

if (rax != 0)
    rcx = *(rax + 0xb08)

int64_t* rbx

if (rax == 0 || rcx == 0)
    rbx = nullptr
else
    rbx = (*(*rcx + 0x100))(rcx)
    rax = data_143f5b298

if (arg1[1].d == 0)
    if (rax != 0)
        int64_t* rcx_6 = *(rax + 0xaf8)
        
        if (rcx_6 != 0)
            rsi = zx.q((*(*rcx_6 + 8))(rcx_6))
    
    wchar16 const* const r8 = u"disabled"
    
    if (rsi.b != 0)
        r8 = u"enabled"
    
    return sub_140b1f700(arg3, u"Stereo is %s", r8)

int64_t* rax_3 = *arg1
wchar16* rcx_1

if (rax_3[1].d == 0)
    rcx_1 = &data_142d40450
else
    rcx_1 = *rax_3

char result = sub_140b16cc0(rcx_1)
void* rcx_2 = data_143f5b298

if (rcx_2 == 0 || *(rcx_2 + 0xaf8) == 0)
    return result

if (rbx != 0)
    if ((*(*rbx + 0x48))(rbx) == 0)
        sub_140b1f640(arg3, u"HMD is disabled. Use 'vr.bEnableHMD True' to re-enable it.")
    
    rcx_2 = data_143f5b298

int64_t* rcx_5 = *(rcx_2 + 0xaf8)
return (*(*rcx_5 + 0x18))(rcx_5, zx.q(result))
