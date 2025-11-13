// 函数: sub_141b49a40
// 地址: 0x141b49a40
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

*(arg1 + 0xc) = 0x200
*arg1 = &data_14306a638
int32_t rax = 0x400
arg1[1].d = 0x400
void* rcx = data_143ddb400

if (rcx != 0)
    sub_140af3c10(rcx, u"SlateRenderer", u"GrayscaleFontAtlasSize", &arg1[1], &data_143de5780)
    sub_140af3c10(data_143ddb400, u"SlateRenderer", u"FontAtlasSize", &arg1[1], &data_143de5780)
    rax = arg1[1].d

int32_t rbx = 0x800
int32_t rcx_2

if (rax s>= 0x80)
    rcx_2 = 0x800
    
    if (rax s< 0x800)
        rcx_2 = rax
else
    rcx_2 = 0x80

arg1[1].d = rcx_2
void* rcx_3 = data_143ddb400

if (rcx_3 != 0)
    sub_140af3c10(rcx_3, u"SlateRenderer", u"ColorFontAtlasSize", arg1 + 0xc, &data_143de5780)
    sub_140af3c10(data_143ddb400, u"SlateRenderer", u"FontAtlasSize", arg1 + 0xc, &data_143de5780)

int32_t rax_1 = *(arg1 + 0xc)

if (rax_1 s>= 0x80)
    if (rax_1 s< 0x800)
        rbx = rax_1
    
    *(arg1 + 0xc) = rbx
else
    *(arg1 + 0xc) = 0x80

return arg1
